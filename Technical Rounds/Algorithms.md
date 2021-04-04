1) Explain what is an algorithm in computing?

An algorithm is a well-defined computational procedure that take some value as input and generate some value as output. In simple words, it’s a sequence of computational steps that converts input into the output.

2) Explain what is Quick Sort algorithm?

Quick Sort algorithm has the ability to sort list or queries quickly. It is based on the principle of partition exchange sort or Divide and conquer. This type of algorithm occupies less space, and it segregates the list into three main parts

Elements less than the Pivot element
Pivot element
Elements greater than the Pivot element
3) Explain what is time complexity of Algorithm?

Time complexity of an algorithm indicates the total time needed by the program to run to completion. It is usually expressed by using the big O notation.

4) Mention what are the types of Notation used for Time Complexity?

The types of Notations used for Time Complexity includes

Big Oh: It indicates "fewer than or the same as" <expression>iterations
Big Omega: It indicates "more than or same as" <expression>iterations
Big Theta: It indicates "the same as"<expression>iterations
Little Oh: It indicates "fewer than" <expression>iterations
Little Omega: It indicates "more than" <expression>iterations
5) Explain how binary search works?

In binary search, we compare the key with the item in the middle position of the array. If the key is less than the item searched then it must lie in the lower half of the array, if the key is greater than the item searched than it should be in upper half of the array.

6) Explain whether it is possible to use binary search for linked lists?

Since random access is not acceptable in linked list, it is impossible to reach the middle element of O(1) time. Thus, binary search is not possible for linked list.

7) Explain what is heap sort?

Heap-sort can be defined as a comparison based sorting algorithm. It divides its input into the unsorted and sorted region, until it shrinks the unsorted region by eliminating the smallest element and moving that to the sorted region.

8) Explain what is Skip list?

Skip list the method for data structuring, where it allows the algorithm to search, delete and insert elements in a symbol table or dictionary. In a skip list, each element is represented by a node. The search function returns the content of the value related to key. The insert operation associates a specified key with a new value, while the delete function deletes the specified key.

9) Explain what is Space complexity of insertion sort algorithm?

Insertion sort is an in-place sorting algorithm which means that it requires no extra or little. storage. For insertion sort, it requires only single list elements to be stored out-side the initial data, making the space-complexity 0(1).

10) Explain what a "Hash Algorithm" is and what are they used for?

"Hash Algorithm" is a hash function that takes a string of any length and decreases it to a unique fixed length string. It is used for password validity, message & data integrity and for many other cryptographic systems.

11) Explain how to find whether the linked list has a loop?

To know whether the linked list has a loop, we will take two pointer approach. If we maintain two pointers, and we increase one pointer after processing two nodes and other after processing every node, we are likely to encounter a situation where both the pointer will be pointing to the same node. This will only occur if linked list has a loop.

12) Explain how encryption algorithm works?

Encryption is the process of converting plaintext into a secret code format referred as "Ciphertext". To convert the text, algorithm uses a string of bits referred as "keys" for calculations. The larger the key, the greater the number of potential patterns for creating cipher text. Most encryption algorithm use codes fixed blocks of input that have length about 64 to 128 bits, while some uses stream method.

13) List out some of the commonly used cryptographic algorithms?

Some of the commonly used cryptographic algorithms are

3-way
Blowfish
CAST
CMEA
GOST
DES and Triple DES
IDEA
LOKI and so on
14) Explain what is the difference between best case scenario and worst case scenario of an algorithm?

Best case scenario: Best case scenario for an algorithm is explained as the arrangement of data for which the algorithm performs best. For example, we take a binary search, for which the best case scenario would be if the target value is at the very center of the data you are searching. The best case time complexity would be 0 (1)

Worst case scenario: It is referred for the worst set of input for a given algorithm. For example quicksort, which can perform worst if you select the largest or smallest element of a sublist for the pivot value. It will cause quicksort to degenerate to O (n2).
15) Explain what is Radix Sort algorithm?

Radix sort puts the element in order by comparing the digits of the numbers. It is one of the linear sorting algorithms for integers.

16) Explain what is a recursive algorithm?

Recursive algorithm is a method of solving a complicated problem by breaking a problem down into smaller and smaller sub-problems until you get the problem small enough that it can be solved easily. Usually, it involves a function calling itself.

17) Mention what are the three laws of recursion algorithm?

All recursive algorithm must follow three laws

It should have a base case
A recursive algorithm must call itself
A recursive algorithm must change its state and move towards the base case
18) Explain what is bubble sort algorithm?

Bubble sort algorithm is also referred as sinking sort. In this type of sorting, the list to be sorted out compares the pair of adjacent items. If they are organized in the wrong order, it will swap the values and arrange them in the correct order.

9) What is Divide and Conquer algorithms?
Divide and Conquer is not an algorithm; it's a pattern for the algorithm. It is designed in a way as to take dispute on a huge input, break the input into minor pieces, and decide the problem for each of the small pieces. Now merge all of the piecewise solutions into a global solution. This strategy is called divide and conquer.

Divide and conquer uses the following steps to make a dispute on an algorithm.

Divide: In this section, the algorithm divides the original problem into a set of subproblems.

Conquer: In this section, the algorithm solves every subproblem individually.

Combine: In this section, the algorithm puts together the solutions of the subproblems to get the solution to the whole problem.

10) Explain the BFS algorithm?
BFS (Breadth First Search) is a graph traversal algorithm. It starts traversing the graph from the root node and explores all the neighboring nodes. It selects the nearest node and visits all the unexplored nodes. The algorithm follows the same procedure for each of the closest nodes until it reaches the goal state.

Algorithm

Step1: Set status=1 (ready state)

Step2: Queue the starting node A and set its status=2, i.e. (waiting state)

Step3: Repeat steps 4 and 5 until the queue is empty.

Step4: Dequeue a node N and process it and set its status=3, i.e. (processed state)

Step5: Queue all the neighbors of N that are in the ready state (status=1) and set their status =2 (waiting state)
[Stop Loop]

Step6: Exit

11) What is Dijkstra's shortest path algorithm?
Dijkstra's algorithm is an algorithm for finding the shortest path from a starting node to the target node in a weighted graph. The algorithm makes a tree of shortest paths from the starting vertex and source vertex to all other nodes in the graph.

Suppose you want to go from home to office in the shortest possible way. You know some roads are heavily congested and challenging to use this, means these edges have a large weight. In Dijkstra's algorithm, the shortest path tree found by the algorithm will try to avoid edges with larger weights.

12) Give some examples of Divide and Conquer algorithm?
Some problems that use Divide and conquer algorithm to find their solution are listed below.

Merge Sort
Quick Sort
Binary Search
Strassen's Matrix Multiplication
Closest pair (points)
13) What are Greedy algorithms? Give some example of it?
A greedy algorithm is an algorithmic strategy which is made for the best optimal choice at each sub stage with the goal of this, eventually leading to a globally optimum solution. This means that the algorithm chooses the best solution at the moment without regard for consequences.

In other words, an algorithm that always takes the best immediate, or local, solution while finding an answer.

Greedy algorithms find the overall, ideal solution for some idealistic problems, but may discover less-than-ideal solutions for some instances of other problems.

Below is a list of algorithms that finds their solution with the use of the Greedy algorithm.

Travelling Salesman Problem
Prim's Minimal Spanning Tree Algorithm
Kruskal's Minimal Spanning Tree Algorithm
Dijkstra's Minimal Spanning Tree Algorithm
Graph - Map Coloring
Graph - Vertex Cover
Knapsack Problem
Job Scheduling Problem
14) What is a linear search?
Linear search is used on a group of items. It relies on the technique of traversing a list from start to end by visiting properties of all the elements that are found on the way.

For example, suppose an array of with some integer elements. You should find and print the position of all the elements with their value. Here, the linear search acts in a flow like matching each element from the beginning of the list to the end of the list with the integer, and if the condition is `True then printing the position of the element.'

Implementing Linear Search

Below steps are required to implement the linear search.

Step1: Traverse the array using for loop.

Step2: In every iteration, compare the target value with the current value of the array

Step3: If the values match, return the current index of the array

Step4: If the values do not match, shift on to the next array element.

Step5: If no match is found, return -1

15) What is a Binary Search Tree?
The binary search tree is a special type of data structure which has the following properties.

Nodes which are less than root will be in the left subtree.
Nodes which are greater than root (i.e., contains more value) will be right subtree.
A binary search tree should not have duplicate nodes.
Both sides subtree (i.e., left and right) also should be a binary search tree.

22) Explain how the encryption algorithm works?
Encryption is the technique of converting plaintext into a secret code format it is also called as "Ciphertext." To convert the text, the algorithm uses a string of bits called as "keys" for calculations. The larger the key, the higher the number of potential patterns for Encryption. Most of the algorithm use codes fixed blocks of input that have a length of about 64 to 128 bits, while some uses stream method for encryption.

23) What Are The Criteria Of Algorithm Analysis?
An algorithm is generally analyzed by two factors.

Time complexity
Space complexity
Time complexity deals with the quantification of the amount of time taken by a set of code or algorithm to process or run as a function of the amount of input. In other words, the time complexity is efficiency or how long a program function takes to process a given input.

Space complexity is the amount of memory used by the algorithm to execute and produce the result.

24) What are the differences between stack and Queue?
Stack and Queue both are non-primitive data structure used for storing data elements and are based on some real-world equivalent.

Let's have a look at key differences based on the following parameters.

Working principle

The significant difference between stack and queue is that stack uses LIFO (Last in First Out) method to access and add data elements whereas Queue uses FIFO (First in first out) method to obtain data member.

Structure

In Stack, the same end is used to store and delete elements, but in Queue, one end is used for insertion, i.e., rear end and another end is used for deletion of elements.

Number of pointers used

Stack uses one pointer whereas Queue uses two pointers (in the simple case).

Operations performed

Stack operates as Push and pop while Queue operates as Enqueue and dequeuer.

Variants

Stack does not have variants while Queue has variants like a circular queue, Priority queue, doubly ended Queue.

Implementation

The stack is simpler while Queue is comparatively complex.

25) What is the difference between the Singly Linked List and Doubly Linked List data structure?
This is a traditional interview question on the data structure. The major difference between the singly linked list and the doubly linked list is the ability to traverse.

You cannot traverse back in a singly linked list because in it a node only points towards the next node and there is no pointer to the previous node.

On the other hand, the doubly linked list allows you to navigate in both directions in any linked list because it maintains two pointers towards the next and previous node.