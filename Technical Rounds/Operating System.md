**- What is a segmentation fault?**

A running program has access to certain portions of the memory. For example, you have local variables in each of your functions; these are stored in the stack. Second, you may have some memory, allocated during runtime (using either malloc, in C) stored on the heap.

Now, the thing is your program is only allowed to touch memory that belongs to it -- the memory previously mentioned. Any access outside that area will cause a segmentation fault.

There are four common mistakes that lead to segmentation faults:

Dereferencing NULL
Dereferencing an uninitialized pointer
Dereferencing a pointer that has been freed or has gone out of scope
Writing off the end of an array
One other way of causing a segfault is a recursive function that uses all of the stack space. On some systems, this will cause a "stack overflow" report, and on others, it will merely appear as another type of segmentation fault.

The main reason for segmentation fault is accessing memory that is either not initialized, out of bounds for your program or trying to modify string literals. These may cause a segmentation fault though it is not guaranteed that they will cause a segmentation fault. Here are some of the common reasons for segmentation faults −

Accessing an array out of bounds
Dereferencing NULL pointers
Dereferencing freed memory
Dereferencing uninitialized pointers
Incorrect use of the "&" (address of) and "*" (dereferencing) operators
Improper formatting specifiers in printf and scanf statements
Stack overflow
Writing to read-only memory

**- What is Paging ?**

Paging is a way to overcommit main memory. In a multi tasking system that are many processes active at any one time and their combined memory spaces will exceed the total RAM in the system.
However any one program will not be using all of its memory space during a particular interval so there is no need to keep all of it in memory, just the parts actually in use.

A particular CPU will have a page size, this is the smallest amount of memory that the MMU will treat as a contiguous block. Also note that each page has an modified flag and some kind of recently used flag so that the OS can decide what to do if another process need more memory. If the page was not modified, it can just be cleared(for security) and reused - these pages can be recovered from the program's executable if needed again. Modified pages need to be written to a swap file before being reassigned.

A couple of terms each process will have a "working set" which refers to the number of pages to be kept in memory to keep the process running normally. An there is a "failure" condition "thrashing" that happens when the total of all working sets exceeds memory available - at this point the swapping is so much that the machine's performance falls to a very low level.

Note the MMU (memory management unit) maps what the program considers as a single contiguous memory space to individual pages in physical memory locations. If a not-present page is accessed it will trigger the OS to read that page from disk.

Paging is a memory management scheme that eliminates the need for contiguous allocation of physical memory. This scheme permits the physical address space of a process to be non – contiguous.

Logical Address or Virtual Address (represented in bits): An address generated by the CPU
Logical Address Space or Virtual Address Space( represented in words or bytes): The set of all logical addresses generated by a program
Physical Address (represented in bits): An address actually available on memory unit
Physical Address Space (represented in words or bytes): The set of all physical addresses corresponding to the logical addresses
Example:

If Logical Address = 31 bit, then Logical Address Space = 231 words = 2 G words (1 G = 230)
If Logical Address Space = 128 M words = 27 * 220 words, then Logical Address = log2 227 = 27 bits
If Physical Address = 22 bit, then Physical Address Space = 222 words = 4 M words (1 M = 220)
If Physical Address Space = 16 M words = 24 * 220 words, then Physical Address = log2 224 = 24 bits
The mapping from virtual to physical address is done by the memory management unit (MMU) which is a hardware device and this mapping is known as paging technique.

The Physical Address Space is conceptually divided into a number of fixed-size blocks, called frames.
The Logical address Space is also splitted into fixed-size blocks, called pages.
Page Size = Frame Size

**- What is Thrashing?**

Thrashing is computer activity that makes little or no progress, usually because memory or other resources have become exhausted or too limited to perform needed operations. When this happens, a pattern typically develops in which a request is made of the operating system by a process or program, the operating system tries to find resources by taking them from some other process, which in turn makes new requests that can't be satisfied. In a virtual storage system (an operating system that manages its logical storage or memory in units called pages), thrashing is a condition in which excessive paging operations are taking place.

A system that is thrashing can be perceived as either a very slow system or one that has come to a halt.

We can say that when page fault ratio decreases below level, it is called thrashing. There are many causes of thrashing and there are several techniques to prevent thrashing

Meaning of Thrashing

If the process does not have number of frames it needs to support pages in active use, it will quickly page-fault. The high paging activity is called thrashing.

In other words we can say that when page fault ratio decreases below level, it is called thrashing.

Causes of Thrashing

It result in severe performance problems.

1) If CPU utilization is too low then we increase the degree of multiprogramming by introducing a new process to the system. A global page replacement algorithm is used. The CPU scheduler sees the decreasing CPU utilization and increases the degree of multiprogramming.
2) CPU utilization is plotted against the degree of multiprogramming.
3) As the degree of multiprogramming increases, CPU utilization also increases.
4) If the degree of multiprogramming is increased further, thrashing sets in and CPU utilization drops sharply.
5) So, at this point, to increase CPU utilization and to stop thrashing, we must decrease the degree of multiprogramming.

To limit the effect of thrashing

To limit the effect of thrashing we can use local replacement algorithm. With Local replacement algorithm, if the process starts thrashing, it cannot steal frames from another process and cause the latter to thrash as well. The problem is not entirely solved.

Thus the effective access time will increase even for the process that is not thrashing

**- How to prevent Thrashing ?**

We must provide a process with as many frames as it needs. Several techniques are used.

The Working of Set Model (Strategy) It starts by looking at how many frames a process is actually using. This defines the locality model.

Locality Model It states that as a process executes, it moves from locality to locality.

A locality is a set of pages that are actively used together.

A program is generally composed of several different localities which overlap.

Explain process vs threads ?

Properties of Process
Here are the important properties of the process:

Creation of each process requires separate system calls for each process.
It is an isolated execution entity and does not share data and information.
Processes use the IPC(Inter-Process Communication) mechanism for communication that significantly increases the number of system calls.
Process management takes more system calls.
A process has its stack, heap memory with memory, and data map.
Properties of Thread
Here are important properties of Thread:

Single system call can create more than one thread
Threads share data and information.
Threads shares instruction, global, and heap regions. However, it has its register and stack.
Thread management consumes very few, or no system calls because of communication between threads that can be achieved using shared memory.

![Image of process vs threads](https://github.com/kaafivikrant/One-day-Before-Interview/blob/master/Images/dsasf.jpg)

**- What is scheduling algorithms ?**

Scheduling Algorithms
There are various algorithms which are used by the Operating System to schedule the processes on the processor in an efficient way.

The Purpose of a Scheduling algorithm
Maximum CPU utilization
Fare allocation of CPU
Maximum throughput
Minimum turnaround time
Minimum waiting time
Minimum response time
There are the following algorithms which can be used to schedule the jobs.

1. First Come First Serve
   It is the simplest algorithm to implement. The process with the minimal arrival time will get the CPU first. The lesser the arrival time, the sooner will the process gets the CPU. It is the non-preemptive type of scheduling.
2. Round Robin
   In the Round Robin scheduling algorithm, the OS defines a time quantum (slice). All the processes will get executed in the cyclic way. Each of the process will get the CPU for a small amount of time (called time quantum) and then get back to the ready queue to wait for its next turn. It is a preemptive type of scheduling.
3. Shortest Job First
   The job with the shortest burst time will get the CPU first. The lesser the burst time, the sooner will the process get the CPU. It is the non-preemptive type of scheduling.
4. Shortest remaining time first
   It is the preemptive form of SJF. In this algorithm, the OS schedules the Job according to the remaining time of the execution.
5. Priority based scheduling
   In this algorithm, the priority will be assigned to each of the processes. The higher the priority, the sooner will the process get the CPU. If the priority of the two processes is same then they will be scheduled according to their arrival time.
6. Highest Response Ratio Next
   In this scheduling Algorithm, the process with highest response ratio will be scheduled next. This reduces the starvation in the system.

**- How a code runs ?**

Why is the operating system important?
OS is the most essential and vital part of a computer without which it is considered useless. It enables an interface or acts like a link for interaction between computer software that is installed on OS and users. It also helps to communicate with hardware and also maintains balance among hardware and CPU. It also provides services to users and a platform for programs to run on. It performs all common tasks applications require.

**- What's the main purpose of an OS?**

The main purpose of an OS is to execute user programs and make it easier for users to understand and interact with computers as well as run applications. It is specially designed to ensure that the computer system performs better by managing all computational activities. It also manages computer memory, processes, and operation of all hardware and software.

Types of OS:

Batched OS (Example: Payroll System, Transactions Process, etc.)
Multi-Programmed OS (Example: Windows O/S, UNIX O/S, etc.)
Timesharing OS (Example: Multics, etc.)
Distributed OS (LOCUS, etc.)
Real-Time OS (PSOS, VRTX, etc.)

**- What are the benefits of a multiprocessor system?**

A Multiprocessor system is a type of system that includes two or more CPUs. It involves the processing of different computer programs at the same time mostly by a computer system with two or more CPUs that are sharing single memory.

Benefits:

Such systems are used widely nowadays to improve performance in systems that are running multiple programs concurrently.
By increasing the number of processors, a greater number of tasks can be completed in unit time.
One also gets a considerable increase in throughput and is cost-effective also as all processors share the same resources.
It simply improves the reliability of the computer system.

What is RAID structure in OS? What are the different levels of RAID configuration?
RAID (Redundant Arrays of Independent Disks) is a method used to store data on Multiple hard disks therefore it is considered as data storage virtualization technology that combines multiple hard disks. It simply balances data protection, system performance, storage space, etc. It is used to improve the overall performance and reliability of data storage. It also increases the storage capacity of the system and its main purpose is to achieve data redundancy to reduce data loss.

**- What is GUI?**

GUI (Graphical User Interface) is basically a type of user interface that allows users to use graphics to interact with OS. GUI is created because it is more user-friendly, less complex, and easier to understand rather than a command-line interface. Its main goal is to increase efficiency and ease of use. Instead of having to memorize commands, users can just click on a button to simply execute the procedure. Examples of GUI include Microsoft Windows, macOS, Apple’s iOS, etc.

**- What is a Pipe and when it is used?**

The pipe is generally a connection among two or more processes that are interrelated to each other. It is a mechanism that is used for inter-process communication using message passing.  One can easily send information such as the output of one program process to another program process using a pipe. It can be used when two processes want to communicate one-way i.e., inter-process communication (IPC).

**- What is different between main memory and secondary memory ?**

Main memory: Main memory in a computer is RAM (Random Access Memory). It is also known as primary memory or read-write memory or internal memory. The programs and data that the CPU requires during the execution of a program are stored in this memory.
Secondary memory: Secondary memory in a computer are storage devices that can store data and programs. It is also known as external memory or additional memory or backup memory or auxiliary memory. Such storage devices are capable of storing high-volume data. Storage devices can be hard drives, USB flash drives, CDs, etc.

**- What is thread in OS?**

Thread is a path of execution that is composed of a program counter, thread id, stack, and set of registers within the process. It is a basic unit of CPU utilization that makes communication more effective and efficient, enables utilization of multiprocessor architectures to a greater scale and greater efficiency, and reduces the time required in context switching. It simply provides a way to improve and increase the performance of applications through parallelism. Threads are sometimes called lightweight processes because they have their own stack but can access shared data.

Multiple threads running in a process share: Address space, Heap, Static data, Code segments, File descriptors, Global variables, Child processes, Pending alarms, Signals, and signal handlers.

Each thread has its own: Program counter, Registers, Stack, and State.

**- What is a process? What are the different states of a process?**

The process is basically a program that is currently under execution. The main function of an OS is to manage and handle all of these processes. When a program is loaded into the memory and it becomes a process, it can be divided into four sections ─ stack, heap, text, and data. There are two types of processes:

Operating System Processes
User Processes

States of Process:

Different states of the process through which process goes are given below:

New State: In this state, a process is just created.
Running: In this state, the CPU starts working on the process’s instructions.
Waiting: In this state, the process cannot run because it just waits for some event to occur
Ready: In this state, the process has all resources available that are required to run but it waits to get assigned to a processor because CPUs are not working currently on instructions passed by the process.
Terminate: In this state, the process is completed I.e., the process has finished execution.

**- What do you mean by FCFS?**

FCFS (First Come First Serve) is a type of OS scheduling algorithm that executes processes in the same order in which processes arrive. In simple words, the process that arrives first will be executed first. It is non-preemptive in nature. FCFS scheduling may cause the problem of starvation if the burst time of the first process is the longest among all the jobs. Burst time here means the time that is required in milliseconds by the process for its execution. It is also considered the easiest and simplest OS scheduling algorithm as compared to others. Implementation of FCFS is generally managed with help of the FIFO (First In First Out) queue.

What is a Scheduling Algorithm? Name different types of scheduling algorithms.
A scheduling algorithm is a process that is used to improve efficiency by utilizing maximum CPU and providing minimum waiting time to tasks. It simply deals with the problem of deciding which of outstanding requests is to be allocated resources. Its main aim is to reduce resource starvation and to ensure fairness amongst parties that are utilizing the resources. In simple words, it is used to allocate resources among various competing tasks.

What is the difference between paging and segmentation?
Paging: It is generally a memory management technique that allows OS to retrieve processes from secondary storage into main memory. It is a non-contiguous allocation technique that divides each process in the form of pages.
Segmentation: It is generally a memory management technique that divides processes into modules and parts of different sizes. These parts and modules are known as segments that can be allocated to process.

What is the difference between multitasking and multiprocessing OS?
Multitasking: It is a system that allows more efficient use of computer hardware. This system works on more than one task at one time by rapidly switching between various tasks. These systems are also known as time-sharing systems.

Multiprocessing: It is a system that allows multiple or various processors in a computer to process two or more different portions of the same program simultaneously. It is used to complete more work in a shorter period of time.

**- What do you mean by Sockets in OS?**

The socket in OS is generally referred to as an endpoint for IPC (Interprocess Communication). Here, the endpoint is referred to as a combination of an IP address and port number.  Sockets are used to make it easy for software developers to create network-enabled programs. It also allows communication or exchange of information between two different processes on the same or different machines. It is mostly used in client-server-based systems.

Types of Sockets

There are basically four types of sockets as given below:

Stream Sockets
Datagram Sockets
Sequenced Packet Sockets
Raw Sockets

**- What is starvation and aging in OS?**

Starvation: It is generally a problem that usually occurs when a process has not been able to get the required resources it needs for progress with its execution for a long period of time. In this condition, low priority processes get blocked and only high priority processes proceed towards completion because of which low priority processes suffer from lack of resources.

Aging: It is a technique that is used to overcome the situation or problem of starvation. It simply increases the priority of processes that wait in the system for resources for a long period of time. It is considered the best technique to resolve the problem of starvation as it adds an aging factor to the priority of each and every request by various processes for resources. It also ensures that low-level queue jobs or processes complete their execution.

What do you mean by Semaphore in OS? Why is it used?
Semaphore is a signaling mechanism. It only holds one positive integer value. It is simply used to solve the problem or issue of critical sections in the synchronization process by using two atomic operations i.e., wait() and signal().

Types of Semaphore
There are usually two types of semaphores as given below:

Binary Semaphore
Counting Semaphore

**- What is Kernel and write its main functions?**

The kernel is basically a computer program usually considered as a central component or module of OS. It is responsible for handling, managing, and controlling all operations of computer systems and hardware. Whenever the system starts, the kernel is loaded first and remains in the main memory. It also acts as an interface between user applications and hardware.

Functions of Kernel:

It is responsible for managing all computer resources such as CPU, memory, files, processes, etc.
It facilitates or initiates the interaction between components of hardware and software.
It manages RAM memory so that all running processes and programs can work effectively and efficiently.
It also controls and manages all primary tasks of the OS as well as manages access and use of various peripherals connected to the computer.
It schedules the work done by the CPU so that the work of each user is executed as efficiently as possible.

**- What are different types of Kernel?**

There are basically five types of Kernels as given below:

Monolithic Kernel
MicroKernel
Hybrid Kernel
Nano Kernel
Exo Kernel

**- Write difference between micro kernel and monolithic kernel?**

MicroKernel: It is a minimal OS that executes only important functions of OS. It only contains a near-minimum number of features and functions that are required to implement OS.
Example: QNX, Mac OS X, K42, etc.

Monolithic Kernel: It is an OS architecture that supports all basic features of computer components such as resource management, memory, file, etc.
Example: Solaris, DOS, OpenVMS, Linux, etc.

**- What is a time-sharing system?**
It is a system that allows more than one user to access the resources of a particular system in many locations. In simple words, it performs multiple tasks on a single processor or CPU. As the name suggests, it means to share time into multiple slots in several processes. It also allows different users from different locations to use a particular computer system at the same time therefore it is considered one of the important types of OS.

**- What is Context Switching?**

Context switching is basically a process of saving the context of one process and loading the context of another process. It is one of the cost-effective and time-saving measures executed by CPU the because it allows multiple processes to share a single CPU. Therefore, it is considered an important part of a modern OS. This technique is used by OS to switch a process from one state to another i.e., from running state to ready state. It also allows a single CPU to handle and control various different processes or threads without even the need for additional resources.

**- What is difference between Kernel and OS?**
Kernel: Kernel is a system program that controls all programs running on the computer. The kernel is basically a bridge between the software and hardware of the system.

Operating System: Operating system is a system program that runs on the computer to provide an interface to the computer user so that they can easily operate on the computer.

What is difference between process and thread?
Process: It is basically a program that is currently under execution by one or more threads. It is a very important part of the modern-day OS.

Thread: It is a path of execution that is composed of the program counter, thread id, stack, and set of registers within the process.

What is a deadlock in OS? What are the necessary conditions for a deadlock?
Deadlock is generally a situation where a set of processes are blocked as each process is holding resources and waits to acquire resources held by another process. In this situation, two or more processes simply try to execute simultaneously and wait for each to finish their execution because they are dependent on each other. We can see a hand problem in our system whenever a deadlock occurs in a program. It is one of the common problems you can see in multiprocessing.

Necessary Conditions for Deadlock

There are basically four necessary conditions for deadlock as given below:

Mutual Exclusion
Hold and Wait
No Pre-emption
Circular Wait or Resource Wait

**- Which are the necessary conditions to achieve a deadlock?**

There are 4 necessary conditions to achieve a deadlock:

Mutual Exclusion: At least one resource must be held in a non-sharable mode. If any other process requests this resource, then that process must wait for the resource to be released.
Hold and Wait: A process must be simultaneously holding at least one resource and waiting for at least one resource that is currently being held by some other process.
No preemption: Once a process is holding a resource ( i.e. once its request has been granted ), then that resource cannot be taken away from that process until the process voluntarily releases it.
Circular Wait: A set of processes { P0, P1, P2, . . ., PN } must exist such that every P[ i ] is waiting for P[ ( i + 1 ) % ( N + 1 ) ].

Enumerate the different RAID levels.

RAID 0 – Non-redundant striping
RAID 1 – Mirrored Disks
RAID 2 – Memory-style error-correcting codes
RAID 3 – Bit-interleaved Parity
RAID 4 – Block-interleaved Parity
RAID 5 – Block-interleaved distributed Parity
RAID 6 – P+Q Redundancy

**- What is multitasking?**

Multitasking is the process within an operating system that allows the user to run several applications at the same time. However, only one application is active at a time for user interaction, although some applications can run “behind the scene”.

**- Explain pros and cons of a command line interface?**

A command line interface allows the user to type in commands that can immediately provide results. Many seasoned computer users are well accustomed to using the command line because they find it quicker and simpler.

However, the main problem with a command line interface is that users have to be familiar with the commands, including the switches and parameters that come with it. This is a downside for people who are not fond of memorizing commands.

**- Why partitioning and formatting is a prerequisite to installing an operating system?**

Partitioning and formatting create a preparatory environment on the drive so that the operating system can be copied and installed properly. This includes allocating space on the drive, designating a drive name, determining and creating the appropriate file system and structure.

**- What is plumbing/piping?**

It is the process of using the output of one program as an input to another. For example, instead of sending the listing of a folder or drive to the main screen, it can be piped and sent to a file, or sent to the printer to produce a hard copy.

**- What is process synchronization?**

When the race condition occurs, it can lead to an undesirable outcome. So to prevent the race condition, we follow a process known as synchronization. Here, we ensure that only one process executes at a time.

**- Explain PCB?**

PCB stands for Process Control Block, and it an operating system data structure, which can collect and store information about the processes. It is also known as the process descriptor.

As soon as a process gets created, the OS creates a corresponding PCB to store the process status and information. With each transition, OS updates the PCB data structure.

**- What are sockets?**

Sockets are the Inter-process Communication mechanisms that are used to provide point-to-point communication between 2 processes.

Sockets are often utilized in client-server applications because many protocols, such as FTP, SMTP, and POP3 use sockets to implement the connection between server and client.

Give the difference between compiler and Interpreter.
Answer: A compiler first reads all the code at once and then tries to execute it, whereas an interpreter reads the code line by line and simultaneously executes it.

**- What do you understand by the main memory and secondary memory?**

Main memory is directly connected to the computer processor, and it acts as a bridge between computer processors and secondary memory. The main objective of the main memory is to get the data from the secondary memory and feed it to the processor so that the appropriate actions could be performed.

RAM and ROM are the 2 main memories used by the system, whereas hard disk and other large-sized memories form the secondary memory.

As compared to the secondary memory, the main memory is straightforward and it is fast to access data from the main memory. That’s why processors directly communicate with the main memory.

Generally, the main memory does not store data permanently. Instead, it only holds data for a specific time and tries to give it to the processor for the further execution process.

**- What are interrupts?**

These are the signals generated by the external input devices to stop the ongoing active process of the CPU. Interrupts use context switching so the CPU can switch between the current process and the new signal generated by the external device. Interrupts help in prioritizing the process execution of the CPU.

**- What are zombie processes?**

Formally, these processes are known as defunct processes. If a child process is still in the process table even after the parent process has been executed, this scenario could cause a zombie process.

Even the kill commands do not have any effect on these processes. If the Wait System Call read the exit status of the process, then the zombie process would remove from the process table.

**- Explain pipe in OS?**

Pipe is the method for exchanging information between processes. Generally, pipe forms a one-way communication, which means by using a pipe, a process can only send information, such as output or other parameters of the process to another process.

For setting a two-way communication between 2 processes, we require 2 pipes for both directions.

**- What do you know about mutex?**

It is an abbreviation for Mutual Exclusion. It is a userspace program object that helps multiple threads to access the same resource, but not simultaneously. The sole purpose of a mutex is to lock a thread with a resource so the other threads can not use the same resource until the first thread finish executing.

**- What is a critical section?**

The program will behave oddly if program parts perform concurrent access to the shared resources. So to protect the shared resources of a program, we create a protected section, which is known as the critical section or critical region.

A critical section can only execute one process at a time, and this eliminates the problems that can be caused by concurrent accessing resources.

Name the various scheduling algorithms.

First Come First Serve (FCFS).
Shortest Job First (SJF).
Priority Scheduling
Round Robin Scheduling
First Come First Serve: It follows the non-preemptive scheduling, and here the process requesting first gets the CPU.

Shortest Job First: It could be preemptive or non-preemptive. In this algorithm, that process gets the CPU that is closest to its execution. Here, CPU gives priority to those jobs which have a low execution time.

Priority Based Scheduling: It is also a preemptive algorithm, and here CPU is allocated to those processes first that have a high priority.

Round Robin Scheduling: It is a preemptive scheduling algorithm, and here each process gets equal time for execution.

**- What is the reader-writer lock?**

Reader-writer lock is used to prevent data integrity. This lock allows concurrent access to read operation, which means multiple threads can read data simultaneously.

But it does not allow concurrent write, and if one thread wants to modify data via writing, then all the other threads will be blocked from reading or writing data.

**- What are APIs?**Answer: API stands for Application Program Interface, and it is a collection of libraries and subprograms. APIs are used to set communication between 2 programs i.e. API provides a general way of sending and receiving data between applications.

**- What do you know about cascading termination?**

When a process finishes execution, then the OS terminates the process via the exit system call. Only the parent process can cause the termination of its child processes, so when the parent process gets entirely executed and terminated, then its child process also gets terminated automatically.

This phenomenon of a process triggering termination of another process is known as cascading termination.

**- Explain the concept of Reentrancy?**

It is a useful, memory-saving technique for multiprogrammed timesharing systems. A Reentrant Procedure is one in which multiple users can share a single copy of a program during the same period. Reentrancy has 2 key aspects: The program code cannot modify itself, and the local data for each user process must be stored separately. Thus, the permanent part is the code, and the temporary part is the pointer back to the calling program and local variables used by that program. Each execution instance is called activation. It executes the code in the permanent part, but has its own copy of local variables/parameters. The temporary part associated with each activation is the activation record. Generally, the activation record is kept on the stack.
Note: A reentrant procedure can be interrupted and called by an interrupting program, and still execute correctly on returning to the procedure.

**- What are short, long and medium-term scheduling?**

Long term scheduler determines which programs are admitted to the system for processing. It controls the degree of multiprogramming. Once admitted, a job becomes a process.

Medium term scheduling is part of the swapping function. This relates to processes that are in a blocked or suspended state. They are swapped out of real-memory until they are ready to execute. The swapping-in decision is based on memory-management criteria.

Short term scheduler, also know as a dispatcher executes most frequently, and makes the finest-grained decision of which process should execute next. This scheduler is invoked whenever an event occurs. It may lead to interruption of one process by preemption.

What do you mean by SMP?
SMP refers to Symmetric Multi-Processing. It is the most ordinary kind of multiple-processor systems. In this system, each computer runs an equal copy of the operating system, and these copies converse with one another as desired.

**- Name some benefits of multithread programming?**

Benefits of multithread processing are:

Economy
Operation of multiprocessing architecture
Resource distribution within the method
There is enlarged responsiveness to the user

**- Define Banker’s algorithm?**

Banker’s algorithm is one shape of deadlock-evasion in a system. It gets its forename from a banking system wherein the bank never allocates obtainable cash in such a move that it can no longer gratify the needs of all of its customers.

Define spooling?
Spooling is generally linked with printing. When diverse applications want to send an output to the laser printer at the same time, spooling takes all of these produce jobs into a disk file and queues them consequently to the printer.

**- What are the required conditions for a deadlock to happen?**

4 conditions will be required for a deadlock to take place:

Mutual exclusion – The available resources cannot be shared. This signifies that the used resources should be mutually exclusive.
Hold and wait – Any process for execution will require several resources. If the resources are not available in sufficient amounts, a process will be able to take the obtainable resources, hold those resources, and wait for more to arrive.
No Preemption – Those resources that can be held by a process can be released only by the process on its own voluntarily. The system will not be able to preempt this resource.
Circular waiting – It is a special kind of waiting where one particular process will be waiting for the resources held by another process. In turn, the second process will be held by the initial one.

**- What is multi tasking, multi programming, multi threading?**

Multi programming: Multiprogramming is the technique of running several programs at a time using timesharing.It allows a computer to do several things at the same time. Multiprogramming creates logical parallelism.
The concept of multiprogramming is that the operating system keeps several jobs in memory simultaneously. The operating system selects a job from the job pool and starts executing a job, when that job needs to wait for any i/o operations the CPU is switched to another job. So the main idea here is that the CPU is never idle.
Multi tasking: Multitasking is the logical extension of multiprogramming .The concept of multitasking is quite similar to multiprogramming but difference is that the switching between jobs occurs so frequently that the users can interact with each program while it is running. This concept is also known as time-sharing systems. A time-shared operating system uses CPU scheduling and multiprogramming to provide each user with a small portion of time-shared system.
Multi threading: An application typically is implemented as a separate process with several threads of control. In some situations a single application may be required to perform several similar tasks for example a web server accepts client requests for web pages, images, sound, and so forth. A busy web server may have several of clients concurrently accessing it. If the web server ran as a traditional single-threaded process, it would be able to service only one client at a time. The amount of time that a client might have to wait for its request to be serviced could be enormous.
So it is efficient to have one process that contains multiple threads to serve the same purpose. This approach would multithread the web-server process, the server would create a separate thread that would listen for client requests when a request was made rather than creating another process it would create another thread to service the request.
So to get the advantages like responsiveness, Resource sharing economy and utilization of multiprocessor architectures multithreading concept can be used

**- What are the different types of operating systems?**
There are five types of operating systems:

Batch operating system
All jobs are submitted at once and are executed in a particular order with any preemption, which means that no jobs can be taken unless these complete.

Multiprogramming operating system
This acts to be an extension of Batch OS, where main memory can have several jobs at once, and they would be executed in a particular order at a particular time.

Multi-tasking operating system
This operating system enables the user to execute multiple tasks on a single processor simultaneously. The CPU, in this case, switches processes at a very fast pace and does it parallel.

Multi-processing operating system
It is the ability where a user can execute multiple processes simultaneously on a multi-processor system. This utilizes more than one CPU at a time.

Real-time operating system
Here a specified time is allotted for each job, and it is usually a critical application pertaining to military operations, satellites, etc.
