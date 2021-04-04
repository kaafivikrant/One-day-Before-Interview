https://www.interviewbit.com/data-structure-interview-questions/






Question: What do you understand by a data structure?
Answer: A data structure offers a convenient way of organizing as well as manipulating the data. Simply put, it allows the data to be used in an effective manner. There is a galore of data structures and each of them is suitable for a distinct set of applications.

For instance, compiler implementations use hash tables for looking up identifiers. Similarly, B-trees are suitable for the implementation of databases. Data structures are virtually applied to all areas relying on data. Some of the most important ones are:

Artificial intelligence
Compiler design
Database management
Graphics
Numerical analysis
Operating system
Statistical analysis
Question: How does a linear data structure differ from a non-linear data structure?
Answer: If the elements of a data structure form a sequence or a linear list then it is called a linear data structure. On the other hand, non-linear data structures are those in which the traversal of nodes is done in a non-linear way.

Arrays, linked lists, stacks, and queues are examples of linear data structures, while graphs and trees are those of non-linear data structures.

Question: What are the various applications of Data Structures?
Answer: In data structures, data is organized in a way that makes it efficient to be used. Some practical applications of data structures are:

Storing data in a tabular form. For example, contact details of a person. This is done through arrays.
Arrays are widely used in image processing and speech processing.
Music players and image sliders use Linked Lists to move to next or previous items.
The most common application of the data structure, Stack is the undo operation, where the last item shows up first.
A Queue is used for job scheduling, the arrangement of data packets for communication.
A Tree is used by the Decision Tree algorithm which is widely used for machine learning and decision making.
Technologies like Blockchain, cryptography are based on Hashing algorithms.
Matrices are widely used to represent data and plotting graphs, performing statistical analysis.
Question: Explain the difference between file structure and storage structure?
Answer: 

File Structure: A hard disk or external device (such as USB), stores data that remains intact till manually deleted. Such a representation of data into secondary or auxiliary memory is called a file structure. 
Storage Structure:  In this type of structure, data (variables, constants, etc.) are stored in the main memory, i.e. RAM, and is deleted once the function that uses this data gets completed.
Question: Please enumerate the various operations that can be performed on a data structure.
Answer: Following are the various operations that can be performed on a data structure:

Deletion – Deleting an existing element from the data structure
Insertion – Adding a new element to the data structure
Searching – Find the location of an element, if it exists, in the data structure
Sorting – Arranging elements of the data structure in:
Ascending or descending order for numerical data
Dictionary order for alphanumeric data
Traversal – Accessing each element of the data structure once for processing
Question: Explain the postfix expression.
Answer: In a postfix expression, the operator is fixed after the operands. Some examples are:

B++ (i.e. B+B)
AB+ (i.e. A+B)
ABC*+ (i.e. A+B*C)
AB*CD*+ (i.e. A*B + C*D)

Question: Can you tell which data structures are used for BFS and DFS of a graph?
Answer: BFS (Breadth-First Search) of a graph uses a queue. Although DFS (Depth First Search) of a graph makes use of a stack, it can also be implemented using recursion that uses function call stack.

Question: Explain a multidimensional array.
Answer: If an array has more than two dimensions, it is called a multidimensional array. They are also called an array of arrays. For example, a 3-D array will look like,

   int 3darr[10][20][30] 
– this array can store 10*20*30 elements.

Assigning values
int ndarr[2][3][5] = {{{1,2,4,5},{5,6,7,9}, {6,5,4,3}}, {{1,1,3,4}, {2,3,4,6}, {5,6,7,8}}};

Accessing elements
To access each element, we need three nested loops, say i,j,k, so that we can get the value as ndarr[i][j][k]

Question: Please explain stack and also mention some of its important applications.
Answer: Stack is a linear data structure that follows either LIFO (Last In First Out) or FILO (First In Last Out) approach for accessing elements. Push, pop, and peek are the basic operations of a stack.

Some notable applications of a stack are:

Check for balanced parentheses in an expression
Evaluation of a postfix expression
Implement two stacks in an array
Infix to postfix conversion
Reverse a string
Question: What is a queue? How is it different from a stack?
Answer: A queue is a form of linear structure that follows the FIFO (First In First Out) approach for accessing elements. Dequeue, enqueue, front, and rear are basic operations on a queue. Like a stack, a queue can be implemented using arrays and linked lists.

In a stack, the item that is most recently added is removed first. Contrary to this, the item least recently added is removed first in case of a queue.

Question: What do you understand by a binary search? What is the best scenario of using it?
Answer: A binary search is an algorithm that starts with searching in the middle element. If the middle element is not the target element then it further checks whether to continue searching the lower half of the higher half. The process continues until the target element is found.

The binary search works best when applied to a list with sorted or ordered elements.

Question: Could you explain how to reference all the elements in a one-dimension array?
Answer: We can reference all the elements in a one-dimension array using an indexed loop. The counter runs from 0 to the maximum array size, say n, minus one. All elements of the one-dimension array are referenced in sequence by using the loop counter as the array subscript.

Question: Please explain what do you understand by FIFO and LIFO?
Answer: Both FIFO and LIFO are approaches to accessing, storing, and retrieving elements from a data structure. LIFO stands for Last In First Out. In this approach, recently stored data is the one to be extracted first.

FIFO is a contraction for First In First Out. Following this approach, the data that is stored the least recently will be extracted first.

Question: What is a Linked List Data structure

Answer: In a Linked List data, elements are stored linearly, but the physical placements do not give the order in the memory; instead, each element points to the next node. The last one points to a terminator indicating the end of the list. There are many types of Linked List – single, double, circular, multiple. A simple singly LinkedList can be drawn as:

Linked List Data structure

Question: Do you know how does dynamic memory allocation help in managing data?
Answer: Dynamic memory allocation helps in storing simple structured data types. Moreover, it can combine separately allocated structured blocks for forming composite structures that contract and expand as required.

Question: What is the difference between NULL and VOID?
Answer: While NULL is a value, VOID is a data type identifier. A variable assigned with a NULL value represents an empty value. The VOID is used for identifying pointers having no initial size.

Question: If you are using C language to implement the heterogeneous linked list, what pointer type should be used?
Answer: We can use void pointers. Unsigned char pointers are another option. This way, we can store any data type in the list. Example,

  struct a{
   struct a *next;
   s_ize d_size;
  }
Question: How does a POP operation differ from a PUSH operation?
Answer: Both PUSH and POP operations pertain to a stack. Data is added to the stack using the PUSH operation, while it is retrieved using the POP operation.

Question: Could you explain how does variable declaration affect memory allocation?
Answer: The total amount of memory to be allocated or reserved in the case of a variable declaration depends on the data type used. For instance, declaring an integer type variable reserves 4 bytes of memory space while declaring a double variable reserve 8 bytes of the available memory.

Question: Write the syntax in C to create a node in the singly linked list.
Answer: 

newNode = Node(data);    //creates a new node.
Question: Please explain the concept of data abstraction.
Answer: Data abstraction helps in dividing complex data problems into smaller, easy-to-manage parts. It starts with specifying all the involved data objects and the various operations to be performed on the same without stressing too much on the way data is stored.

Question: Can you write a C program to insert a node in a circular singly list at the beginning?
Answer: In a circular LinkedList, the last pointer points to the head (first node). For this, we use an external pointer that points to the last node, and the last->next points to the first node. We take the last node pointer because it saves us from traversing the entire list while inserting a node in the beginning or end. 

Program steps

Create a node N
N->next = last->next
last->next = N
Code

 struct Node *addBeginning(struct Node *last, int data) 
{ 
 /*check if list empty, if so create a node, else proceed  as below*/
  // dynamically create a node
  struct Node *N 
        = (struct Node *)malloc(sizeof(struct Node)); 
  // Assign the data. 
  N -> data = data; 
  // last pointer becomes the first node 
  N -> next = last -> next; 
  last -> next = N; 
  return last; 
}
Question: How will you insert a new item in a binary search tree?
Answer: As a binary search tree doesn’t allow for duplicates, the new item to be inserted must be unique. Assuming it is, we will proceed with checking whether the tree is empty or not. If it is empty, then the new item will be inserted in the root node.

However, if the tree is non-empty then we will refer to the key of the new item. When it is smaller than the root item’s key, the new item will be added to the left subtree. If the new item’s key is bigger than the root item’s key, then the new item is inserted into the right subtree.

Question: Could you explain how does the selection sort work on an array?
Answer: The selection sort begins with finding the smallest element. It is switched with the element present at subscript 0. Next, the smallest element in the remaining subarray is located and switched with the element residing in the subscript 1.

The aforementioned process is repeated until the biggest element is placed at the subscript n-1, where n represents the size of the given array.

Question: Write the pseudocode to perform in-order traversal on a binary tree.
Answer: In-order traversal is a depth-first traversal. The method is called recursively to perform traversal on a binary tree. The code is as follows:

struct btnode
{
    struct btnode *left;
    struct btnode *right;
}
*root = NULL, *temp = NULL;
void inorder(struct btnode *temp)
{
    if (root == NULL)
    {
        printf("Root is empty");
        return;
    }
    if (temp->left != NULL)    
        inorder(temp->left);
    if (temp->right != NULL)    
        inorder(t->right);
}
Question: Write the recursive C function to count the number of nodes present in a binary tree.
Answer: 

static int counter = 0;
int countnodes(struct node *root)
{
    if(root != NULL)
    {
        countnodes(root->left);
        counter++;
        countnodes(root->right);
    }
    return counter;
}
Question: Write a recursive C function to calculate the height of a binary tree.
Answer: To find the height using recursion, we find the maximum of the height of subtrees on the left and right sides and then add it with the root. 

struct node
{
int data;
struct node *left;
struct node *right;
};
int height(struct node *node)
{
if(node == NULL)
return 0;
else
{
int l_side;
int r_side;
l_side = height(node -> left);
r_side = height(node -> right);
if(l_side > r_side)
{
 return l_side + 1;
}
else
 return r_side + 1;
}

}
Question: Do you know how the memory is affected by signed and unsigned numbers?
Answer: For signed numbers, the first bit is reserved for indicating whether the number is positive or negative. Hence, it has one bit less for storing the value. Unlike signed numbers, unsigned numbers have all the bits available for storing the number.

The effect of the aforementioned can be seen in the value range available to signed and unsigned numbers. While an unsigned 8-bit number can have a range of 0 to 255, an 8-bit signed number has a range varying from -128 to 127.

Question: Do all declaration statements result in a fixed memory reservation?
Answer: Except for pointers, all declaration statements result in a fixed memory reservation. Instead of allocating memory for storing data, a pointer declaration results in allocating memory for storing the address of the pointer variable.

For pointers, actual memory allocation for the data happens during the runtime.

Question: How does an array differ from a stack?
Answer: A stack follows the LIFO approach. This means that data manipulation follows a specific sequence where the latest data element is the one to be retrieved first.

Unlike a stack, an array doesn’t follow any particular sequence for adding or retrieving data. Adding or retrieving an element in an array is done by referring to the array index.

Question: What do you understand by an AVL tree?
Answer: An AVL tree is a type of BST (Binary Search Tree), which is always in a partially-balanced state. The measure of the balance is given by the difference of the heights of the subtrees from the root node of the AVL tree.

Question: Please explain how does an Array differs from a Linked List?
Answer: Following are the various differences between an array and a linked list:

Additional Memory – For each element belonging to a linked list, extra memory space is required for storing the pointer. Arrays have no such requirement
Cache – In comparison to linked lists, arrays have better cache locality, which can significantly enhance the performance in various scenarios
Insertion and Deletion – It is easy to add or delete elements in a linked list. Inserting and deleting elements for an array is comparatively expensive
Random Access – Linked lists do not allow random access, while arrays do
Size – While the size of an array is fixed, the size of a linked list is dynamic
Question: What do you understand by Infix, Prefix, and Postfix notations?
Answer:

Infix Notation – Operators are written between the operands. This is the standard way of writing expressions. For example, A * (B + C) / D
Postfix Notation/Reverse Polish Notation – Operators are written after the operands, hence the name. For instance, A B C + * D /
Prefix Notation/Polish Notation – Operators are written before the operands. / * A + B C D is the prefix notation equivalent of the aforementioned postfix notation example
Question: Please explain the Linked List and its various types.
Answer: In a linked list, each element is a distinct object. Like arrays, linked lists are a linear type of data structure. In addition to data, every element of a linked list comprises a reference to the next element. Various types of linked lists are:

Singly Linked List – Each node stores the address or reference of the next node in the linked list, leave for the last node that stores NULL
Doubly Linked List – Each node keeps two references. One point to the next node and the other points to the previous node
Circular Linked List – In this type of linked list, all nodes are connected to form a circle. Hence, there is no NULL at the end. A circular linked list can either be a single circular linked list or a double circular linked list
Question: How will you implement a stack using queue and vice-versa?
Answer: It is possible to implement a stack using two queues. Further, there are two options; either to make the push operation costly or the pop operation costly.

A queue can also be implemented with two stacks. Moreover, there are two options; either to make the enQueue operation costly or the deQueue operation costly.

Question: Which data structures are used for implementing LRU cache?
Answer: By organizing items in order of use, a Least Recently Used or LRU cache allows quick identification of an item that hasn’t been put to use for the longest time. Two data structures are used for implementing an LRU cache:

Queue – Implemented using a doubly-linked list. The maximum size of the queue is determined by the total number of frames available i.e. the cache size. While the most recently used pages will be near the rear end of the queue, the least recently pages will be near the queue’s front end
Hashmap – Having page number as the key along with the address of the corresponding queue node as the value
Question: Could you give a brief explanation of the various approaches for developing algorithms?
Answer: There are 3 main approaches to developing algorithms:

Divide and Conquer – Involves dividing the entire problem into a number of subproblems and then solving each of them independently
Dynamic Programming – Identical to the divide and conquer approach with the exception that all sub-problems are solved together
Greedy Approach – Finds a solution by choosing the next best option
Question: Please enumerate some examples of greedy and divide and conquer algorithms.
Answer: Some examples of algorithms that follow greedy approach are:

Dijkstra’s Minimal Spanning Tree
Graph – Map Coloring
Graph – Vertex Cover
Job Scheduling Problem
Knapsack Problem
Kruskal’s Minimal Spanning Tree
Prim’s Minimal Spanning Tree
Travelling Salesman
Following are some notable instances of the divide and conquer approach:

Binary Search
Closest Pair (or Points)
Merge Sort
Quick Sort
Strassen’s Matrix Multiplication
Question: How does insertion sort differ from selection sort?
Answer: Both insertion and selection approaches maintain two sub-lists, sorted and unsorted. Each takes one element from the unsorted sub-list and place it into the sorted sub-list. The distinction between the two sorting processes lies in the treatment of the current element.

Insertion sort takes the current element and places it in the sorted sublist at the appropriate location. Selection sort, on the other hand, searches for the minimum value in the unsorted sub-list and replaces the same with the present element.

Question: What do you understand by shell sort?
Answer: The shell sort can be understood as a variant of the insertion sort. The approach divides the entire list into smaller sub-lists based on some gap variable. Each sub-list is then sorted using insertion sort.

Question: Can you explain tree traversal?
Answer: The process for visiting all the nodes of a tree is called tree traversal. It always starts from the root node and there are three ways of doing it:

In-order Traversal
Pre-order Traversal
Post-order Traversal
Question: Please explain a spanning tree. What is the maximum number of spanning trees a graph can have?
Answer: A spanning tree is a subset of a graph that has all the vertices but with the minimum possible number of edges. Neither a spanning tree can be disconnected and nor does it have cycles.

The maximum number of spanning trees that a graph can have depended on how connected the graph is. A complete undirected graph with n number of nodes can have a maximum of nn-1 number of spanning trees.

Question: How does the Kruskal’s Algorithm work?
Answer: Kruskal’s algorithm treats a graph as a forest and each node in it as an individual tree. A tree connects to another tree only if it:

Has the least cost among all the available options
Does not violate the MST properties
Question: What do you understand by Heap in data structure?
Answer: A Heap data structure is a special balanced binary tree in which the root node key is compared with its children and accordingly arranged. A Heap data structure can be of two types:

Min-Heap – The parent node has a key-value less than its children
Max-Heap – The parent node has a key-value greater than its children
Question: Please explain recursion.
Answer: The ability to allow a function or module to call itself is called recursion. Either a function f calls itself directly or calls another function ‘g’ that in turn calls the function ‘f. The function f is known as the recursive function and it follows the recursive properties:

Base criteria – Where the recursive function stops calling itself
Progressive approach – Where the recursive function tries to meet the base criteria in each iteration
Question: Can you explain the Tower of Hanoi problem?
Answer: The Tower of Hanoi is a mathematical puzzle that comprises of three tower (or pegs) and more than one ring. Each ring is of varying size and stacked upon one another such that the larger one is beneath the smaller one.

The goal of the Tower of Hanoi problem is to move the tower of the disk from one peg to another without breaking the properties.

Question: How do the BFS (Breadth-First Search) and DFS (Depth First Search) algorithms work?
Answer: The BFS algorithm traverses a graph in the breadthwards motion. It uses a queue to remember the next vertex for starting a search when a dead end occurs in any iteration.

A DFS algorithm traverses a graph in the depthward motion. It uses a stack for remembering the next vertex to start a search when coming across a dead end in an iteration.

Question: What do you understand by hashing?
Answer: The technique of converting a range of key values into a range of indexes of an array is known as hashing. It is possible to create associative data storage using hash tables where data indices can be found by providing the corresponding key values.

Question: Please explain an MST (Minimum Spanning Tree). Also, explain how does Prim’s algorithm find a minimum spanning tree.
Answer: An MST or Minimum Spanning Tree is a spanning tree in a weighted graph that has the minimum weight of all the possible spanning trees. Each node is treated as a single tree by Prim’s algorithm while adding new nodes to the spanning tree from the available graph.

Question: Can you explain the interpolation search technique?
Answer: The interpolation search technique is an enhanced variant of binary search. It works on the probing position of the required value.

Question: How will you check whether the given Binary Tree is BST or not?
Answer: Simply do inorder traversal of the given binary tree while keeping track of the previous key value. If the current key value is greater, then continue, otherwise return false. The binary tree is BST if the inorder traversal of the binary tree is sorted.

What is a heap data structure?
Heap is a special tree-based non-linear data structure in which the tree is a complete binary tree. A binary tree is said to be complete if all levels are completely filled except possibly the last level and the last level has all elements towards as left as possible. Heaps are of two types:

Max-Heap:
In a Max-Heap the data element present at the root node must be greatest among all the data elements present in the tree.
This property should be recursively true for all sub-trees of that binary tree.
Min-Heap:
In a Min-Heap the data element present at the root node must be the smallest (or minimum) among all the data elements present in the tree.
This property should be recursively true for all sub-trees of that binary tree.

35. What is the difference between tree and graph data structure?
Tree and graph are differentiated by the fact that a tree structure must be connected and can never have loops whereas in the graph there are no restrictions.
Tree provides insights on relationship between nodes in a hierarchical manner and graph follows a network model.
36. What is the difference between the Breadth First Search (BFS) and Depth First Search (DFS)?
BFS and DFS both are the traversing methods for a graph. Graph traversal is nothing but the process of visiting all the nodes of the graph.
The main difference between BFS and DFS is that BFS traverses level by level whereas DFS follows first a path from the starting to the end node, then another path from the start to end, and so on until all nodes are visited.
Furthermore, BFS uses queue data structure for storing the nodes whereas DFS uses the stack for traversal of the nodes for implementation.
DFS yields deeper solutions that are not optimal, but it works well when the solution is dense whereas the solutions of BFS are optimal.
You can learn more about BFS here: Breadth First Search and DFS here: Depth First Search.
37. How do you know when to use DFS over BFS?
The usage of DFS heavily depends on the structure of the search tree/graph and the number and location of solutions needed. Following are the best cases where we can use DFS:
If it is known that the solution is not far from the root of the tree, a breadth first search (BFS) might be better.
If the tree is very deep and solutions are rare, depth first search (DFS) might take an extremely long time, but BFS could be faster.
If the tree is very wide, a BFS might need too much memory, so it might be completely impractical. We go for DFS in such cases.
If solutions are frequent but located deep in the tree we opt for DFS.
38. What is topological sorting in a graph?
Topological sorting is a linear ordering of vertices such that for every directed edge ij, vertex i comes before j in the ordering.
Topological sorting is only possible for Directed Acyclic Graph (DAG).
Applications:
jobs scheduling from the given dependencies among jobs.
ordering of formula cell evaluation in spreadsheets
ordering of compilation tasks to be performed in make files,
data serialization
resolving symbol dependencies in linkers.

33. What are the applications of graph data structure?
Graphs are used in wide varieties of applications. Some of them are as follows:

Social network graphs to determine the flow of information in social networking websites like facebook, linkedin etc.
Neural networks graphs where nodes represent neurons and edge represent the synapses between them
Transport grids where stations are the nodes and routes are the edges of the graph.
Power or water utility graphs where vertices are connection points and edge the wires or pipes connecting them.
Shortest distance between two end points algorithms.

28) Define the queue data structure.
A queue can be defined as an ordered list which enables insert operations to be performed at one end called REAR and delete operations to be performed at another end called FRONT.

29) List some applications of queue data structure.
The Applications of the queue is given as follows:

Queues are widely used as waiting lists for a single shared resource like a printer, disk, CPU.
Queues are used in the asynchronous transfer of data (where data is not being transferred at the same rate between two processes) for eg. pipes, file IO, sockets.
Queues are used as buffers in most of the applications like MP3 media player, CD player, etc.
Queues are used to maintain the playlist in media players to add and remove the songs from the play-list.
Queues are used in operating systems for handling interrupts.
30) What are the drawbacks of array implementation of Queue?
Memory Wastage: The space of the array, which is used to store queue elements, can never be reused to store the elements of that queue because the elements can only be inserted at front end and the value of front might be so high so that, all the space before that, can never be filled.
Array Size: There might be situations in which, we may need to extend the queue to insert more elements if we use an array to implement queue, It will almost be impossible to extend the array size, therefore deciding the correct array size is always a problem in array implementation of queue.
31) What are the scenarios in which an element can be inserted into the circular queue?
If (rear + 1)%maxsize = front, the queue is full. In that case, overflow occurs and therefore, insertion can not be performed in the queue.
If rear != max - 1, the rear will be incremented to the mod(maxsize) and the new value will be inserted at the rear end of the queue.
If front != 0 and rear = max - 1, it means that queue is not full therefore, set the value of rear to 0 and insert the new element there.
32) What is a dequeue?
Dequeue (also known as double-ended queue) can be defined as an ordered set of elements in which the insertion and deletion can be performed at both the ends, i.e. front and rear.

33) What is the minimum number of queues that can be used to implement a priority queue?
Two queues are needed. One queue is used to store the data elements, and another is used for storing priorities.

34) Define the tree data structure.
The Tree is a recursive data structure containing the set of one or more data nodes where one node is designated as the root of the tree while the remaining nodes are called as the children of the root. The nodes other than the root node are partitioned into the nonempty sets where each one of them is to be called sub-tree.

35) List the types of tree.
There are six types of tree given as follows.

General Tree
Forests
Binary Tree
Binary Search Tree
Expression Tree
Tournament Tree
36) What are Binary trees?
A binary Tree is a special type of generic tree in which, each node can have at most two children. Binary tree is generally partitioned into three disjoint subsets, i.e. the root of the node, left sub-tree and Right binary sub-tree.

5. What is a linked list data structure?
It’s a linear data structure or a sequence of data objects where elements are not stored in adjacent memory locations. The elements are linked using pointers to form a chain. Each element is a separate object, called a node.  Each node has two items: a data field and a reference to the next node. The entry point in a linked list is called the head. Where the list is empty, the head is a null reference and the last node has a reference to null.

A linked list is a dynamic data structure, where the number of nodes is not fixed, and the list has the ability to grow and shrink on demand.

It is applied in cases where:

We deal with an unknown number of objects or don’t know how many items are in the list
We need constant-time insertions/deletions from the list, as in real-time computing where time predictability is critical
Random access to any elements is not needed
The algorithm requires a data structure where objects need to be stored irrespective of their physical address in memory
We need to insert items in the middle of the list as in a priority queue
Some implementations are stacks and queues, graphs, directory of names, dynamic memory allocation, and performing arithmetic operations on long integers.

6. Are linked lists considered linear or non-linear data structures?
Linked lists are considered both linear and non-linear data structures depending upon the application they are used for. When used for access strategies, it is considered as a linear data-structure. When used for data storage, it is considered a non-linear data structure.

7. What are the advantages of a linked list over an array? In which scenarios do we use Linked List and when Array?
Advantages of a linked list over an array are:

1. Insertion and Deletion
Insertion and deletion of nodes is an easier process, as we only update the address present in the next pointer of a node. It’s expensive to do the same in an array as the room has to be created for the new elements and existing elements must be shifted.

2. Dynamic Data Structure
As a linked list is a dynamic data structure, there is no need to give an initial size as it can grow and shrink at runtime by allocating and deallocating memory. However, the size is limited in an array as the number of elements is statically stored in the main memory.

3. No wastage of memory
As the size of a linked list can increase or decrease depending on the demands of the program, and memory is allocated only when required, there is no memory wasted. In the case of an array, there is memory wastage. For instance, if we declare an array of size 10 and store only five elements in it, then the space for five elements is wasted.

4. Implementation
Data structures like stack and queues are more easily implemented using a linked list than an array.

Some scenarios where we use linked list over array are:

When we know the upper limit on the number of elements in advance
When there are a large number of add or remove operations
When there are no large number of random access to elements
When we want to insert items in the middle of the list, such as when implementing a priority queue
Some scenarios in which we use array over the linked list are:

When we need to index or randomly access elements
When we know the number of elements in the array beforehand, so we can allocate the correct amount of memory
When we need speed when iterating through all the elements in the sequence
When memory is a concern; filled arrays use less memory than linked lists, as each element in the array is the data but each linked list node requires the data as well as one or more pointers to the other elements in the linked list
In summary, we consider the requirements of space, time, and ease of implementation to decide whether to use a linked list or array.

8. What is a doubly-linked list? Give some examples.
It is a complex type (double-ended LL) of a linked list in which a node has two links, one that connects to the next node in the sequence and another that connects to the previous node. This allows traversal across the data elements in both directions. 

Examples include: 

A music playlist with next and previous navigation buttons
The browser cache with BACK-FORWARD visited pages
The undo and redo functionality on a browser, where you can reverse the node to get to the previous page
9. How do you reference all of the elements in a one-dimension array?
All of the elements in a one-dimension array can be referenced using an indexed loop as the array subscript so that the counter runs from 0 to the array size minus one. 

10. What are dynamic data structures? Name a few.
They are collections of data in memory that expand and contract to grow or shrink in size as a program runs. This enables the programmer to control exactly how much memory is to be utilized.

Examples are the dynamic array, linked list, stack, queue, and heap.

Top 35 Data Structure Interview Questions in 2021
By Simplilearn
Last updated on Mar 22, 202118088
Top 35 Data Structure Interview Questions in 2021
You may be wondering what questions you’ll face in your interview. Just remember that interviewers aren’t trying to trick you and don’t expect perfection, but it’s their opportunity to ascertain your knowledge before they invest in your employment. Proper preparation is always advised. 

Data structures and algorithm questions are an important part of any programming job interview, especially one for Data Science and Java-based role. Sound knowledge of data structures and algorithms will help you stand apart from the herd. The following Data Structure interview questions will help you crack your next interview!

Data Structure Interview Questions
1. What is a data structure?
The data structure is the way data is organized (stored) and manipulated for retrieval and access. It also defines the way different sets of data relate to one another, establishing relationships and forming algorithms.

2. What is a linear data structure? Name a few examples.
A data structure is linear if all its elements or data items are arranged in a sequence or a linear order. The elements are stored in a non-hierarchical way so that each item has successors and predecessors except the first and last element in the list.

Examples of linear data structures are Arrays, Stack, Strings, Queue, and Linked List.

Data Science with Python
The Ultimate Ticket To Top Data Science Job RolesEXPLORE COURSEData Science with Python
3. What are some applications of data structures? 
Numerical analysis, operating system, AI, compiler design, database management, graphics, statistical analysis, and simulation.

4. What is the difference between file structure and storage structure?
The difference lies in the memory area accessed. Storage structure refers to the data structure in the memory of the computer system, whereas file structure represents the storage structure in the auxiliary memory.

5. What is a linked list data structure?
It’s a linear data structure or a sequence of data objects where elements are not stored in adjacent memory locations. The elements are linked using pointers to form a chain. Each element is a separate object, called a node.  Each node has two items: a data field and a reference to the next node. The entry point in a linked list is called the head. Where the list is empty, the head is a null reference and the last node has a reference to null.

A linked list is a dynamic data structure, where the number of nodes is not fixed, and the list has the ability to grow and shrink on demand.

It is applied in cases where:

We deal with an unknown number of objects or don’t know how many items are in the list
We need constant-time insertions/deletions from the list, as in real-time computing where time predictability is critical
Random access to any elements is not needed
The algorithm requires a data structure where objects need to be stored irrespective of their physical address in memory
We need to insert items in the middle of the list as in a priority queue
Some implementations are stacks and queues, graphs, directory of names, dynamic memory allocation, and performing arithmetic operations on long integers.

6. Are linked lists considered linear or non-linear data structures?
Linked lists are considered both linear and non-linear data structures depending upon the application they are used for. When used for access strategies, it is considered as a linear data-structure. When used for data storage, it is considered a non-linear data structure.

7. What are the advantages of a linked list over an array? In which scenarios do we use Linked List and when Array?
Advantages of a linked list over an array are:

1. Insertion and Deletion
Insertion and deletion of nodes is an easier process, as we only update the address present in the next pointer of a node. It’s expensive to do the same in an array as the room has to be created for the new elements and existing elements must be shifted.

2. Dynamic Data Structure
As a linked list is a dynamic data structure, there is no need to give an initial size as it can grow and shrink at runtime by allocating and deallocating memory. However, the size is limited in an array as the number of elements is statically stored in the main memory.

3. No wastage of memory
As the size of a linked list can increase or decrease depending on the demands of the program, and memory is allocated only when required, there is no memory wasted. In the case of an array, there is memory wastage. For instance, if we declare an array of size 10 and store only five elements in it, then the space for five elements is wasted.

4. Implementation
Data structures like stack and queues are more easily implemented using a linked list than an array.

Some scenarios where we use linked list over array are:

When we know the upper limit on the number of elements in advance
When there are a large number of add or remove operations
When there are no large number of random access to elements
When we want to insert items in the middle of the list, such as when implementing a priority queue
Some scenarios in which we use array over the linked list are:

When we need to index or randomly access elements
When we know the number of elements in the array beforehand, so we can allocate the correct amount of memory
When we need speed when iterating through all the elements in the sequence
When memory is a concern; filled arrays use less memory than linked lists, as each element in the array is the data but each linked list node requires the data as well as one or more pointers to the other elements in the linked list
In summary, we consider the requirements of space, time, and ease of implementation to decide whether to use a linked list or array.

8. What is a doubly-linked list? Give some examples.
It is a complex type (double-ended LL) of a linked list in which a node has two links, one that connects to the next node in the sequence and another that connects to the previous node. This allows traversal across the data elements in both directions. 

Examples include: 

A music playlist with next and previous navigation buttons
The browser cache with BACK-FORWARD visited pages
The undo and redo functionality on a browser, where you can reverse the node to get to the previous page
9. How do you reference all of the elements in a one-dimension array?
All of the elements in a one-dimension array can be referenced using an indexed loop as the array subscript so that the counter runs from 0 to the array size minus one. 

10. What are dynamic data structures? Name a few.
They are collections of data in memory that expand and contract to grow or shrink in size as a program runs. This enables the programmer to control exactly how much memory is to be utilized.

Examples are the dynamic array, linked list, stack, queue, and heap.

Enroll today for the Java Certification Training Course to learn all about arrays, loops, operators, and more. Check out the course curriculum now!
11. What is an algorithm? 
An algorithm is a step by step method of solving a problem or manipulating data. It defines a set of instructions to be executed in a certain order to get the desired output. 

12. Why do we need to do an algorithm analysis?
A problem can be solved in more than one way using several solution algorithms. Algorithm analysis provides an estimation of the required resources of an algorithm to solve a specific computational problem. The amount of time and space resources required to execute is also determined.

The time complexity of an algorithm quantifies the amount of time taken for an algorithm to run as a function of the length of the input. The space complexity quantifies the amount of space or memory taken by an algorithm, to run as a function of the length of the input.

13. What is a stack?
A stack is an abstract data type that specifies a linear data structure, as in a real physical stack or piles where you can only take the top item off the stack in order to remove things. Thus, insertion (push) and deletion (pop) of items take place only at one end called top of the stack, with a particular order: LIFO (Last In First Out) or FILO (First In Last Out).

Big Data Hadoop and Spark Developer Course (FREE)
Learn Big Data Basics from Top Experts - for FREEENROLL NOWBig Data Hadoop and Spark Developer Course (FREE)
14. Where are stacks used?
Expression, evaluation, or conversion of evaluating prefix, postfix, and infix expressions
Syntax parsing
String reversal
Parenthesis checking
Backtracking
15. What is a queue data structure? 
A queue is an abstract data type that specifies a linear data structure or an ordered list,  using the First In First Out (FIFO) operation to access elements. Insert operations can be performed only at one end called REAR and delete operations can be performed only at the other end called FRONT. 

16. List some applications of queue data structure.
To prioritize jobs as in the following scenarios:

As waiting lists for a single shared resource in a printer, CPU, call center systems, or image uploads; where the first one entered is the first to be processed
In the asynchronous transfer of data; or example pipes, file IO, and sockets
As buffers in applications like MP3 media players and CD players
To maintain the playlist in media players (to add or remove the songs)
17. What is a Dequeue?
It is a double-ended queue, or a data structure, where the elements can be inserted or deleted at both ends (FRONT and REAR).

18. What operations can be performed on queues?
enqueue() adds an element to the end of the queue
dequeue() removes an element from the front of the queue
init() is used for initializing the queue
isEmpty tests for whether or not the queue is empty
The front is used to get the value of the first data item but does not remove it
The rear is used to get the last item from a queue
19. What are the advantages of the heap over a stack?
Generally, both heap and stack are part of memory and used in Java for different needs: 

Heap is more flexible than the stack because memory space can be dynamically allocated and de-allocated as needed 
Heap memory is used to store objects in Java, whereas stack memory is used to store local variables and function call 
Objects created in the heap are visible to all threads, whereas variables stored in stacks are only visible to the owner as private memory
When using recursion, the size of heap memory is more whereas it quickly fill-ups stack memory 
20. Where can stack data structure be used?
Expression evaluation
Backtracking
Memory management
Function calling and return
21. What is the difference between a PUSH and a POP?
The acronyms stand for Pushing and Popping operations performed on a stack. These are ways data is stored and retrieved. 

PUSH is used to add an item to a stack, while POP is used to remove an item.
PUSH takes two arguments, the name of the stack to add the data to and the value of the entry to be added. POP only needs the name of the stack. 
When the stack is filled and another PUSH command is issued, you get a stack overflow error, which means that the stack can no longer accommodate the last PUSH. In POP, a stack underflow error occurs when you’re trying to POP an already empty stack. 
22. Which sorting algorithm is considered the fastest? Why?
A single sorting algorithm can’t be considered best, as each algorithm is designed for a particular data structure and data set. However, the QuickSort algorithm is generally considered the fastest because it has the best performance for most inputs.

Its advantages over other sorting algorithms include the following:

Cache-efficient: It linearly scans and linearly partitions the input. This means we can make the most of every cache load. 
Can skip some swaps: As QuickSort is slightly sensitive to input that is in the right order, it can skip some swaps.
Efficient even in worst-case input sets, as the order is generally random.
Easy adaption to already- or mostly-sorted inputs.
When speed takes priority over stability.
23. What is the merge sort? How does it work?
Merge sort is a divide-and-conquer algorithm for sorting the data. It works by merging and sorting adjacent data to create bigger sorted lists, which are then merged recursively to form even bigger sorted lists until you have one single sorted list.

24. How does the Selection sort work?
Selection sort works by repeatedly picking the smallest number in ascending order from the list and placing it at the beginning. This process is repeated moving toward the end of the list or sorted subarray.

Scan all items and find the smallest. Switch over the position as the first item. Repeat the selection sort on the remaining N-1 items. We always iterate forward (i from 0 to N-1) and swap with the smallest element (always i).

Time complexity: best case O(n2); worst O(n2)

Space complexity: worst O(1)

25. Define the graph data structure?
It is a type of non-linear data structure that consists of vertices or nodes connected by edges or arcs to enable storage or retrieval of data. Edges may be directed or undirected. 

26. What are the applications of graph data structure?
Transport grids where stations are represented as vertices and routes as the edges of the graph
Utility graphs of power or water, where vertices are connection points and edge the wires or pipes connecting them
Social network graphs to determine the flow of information and hotspots (edges and vertices)
Neural networks where vertices represent neurons and edge the synapses between them

