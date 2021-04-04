https://www.bigocheatsheet.com/






What are the different types of Time complexity notation used?
As we have seen, Time complexity is given by time as a function of length of input. And, there exists a relation between the input data size (n) and number of operations performed (N) with respect to time. This relation is denoted as Order of growth in Time complexity and given notation O[n] where O is the order of growth and n is the length of input. It is also called as ‘Big O Notation’

Big O Notation expresses the run time of an algorithm in terms of how quickly it grows relative to the input ‘n’ by defining the N number of operations that are done on it. Thus, the time complexity of an algorithm is denoted by the combination of all O[n] assigned for each line of function.

There are different types of time complexities used, let’s see one by one:

1. Constant time – O (1)

2. Linear time – O (n)

3. Logarithmic time – O (log n)

4. Quadratic time – O (n^2)

5. Cubic time – O (n^3)

and many more complex notations like Exponential time, Quasilinear time, factorial time, etc. are used based on the type of functions defined.

Constant time – O (1)
An algorithm is said to have constant time with order O (1) when it is not dependent on the input size n. Irrespective of the input size n, the runtime will always be the same. Example as shown:


Above code shows that irrespective of the length of array (n), the runtime to get the first element in any array of any length is the same. If the run time is considered as 1 unit of time, then it takes only 1 unit of time to run both the arrays, irrespective of length. Thus, the function comes under constant time with order O (1).

Linear time – O(n)
An algorithm is said to have a linear time complexity when the running time increases linearly with the length of the input. When the function involves checking all the values in an input data, such function has Time complexity with this order O(n). For example:


Above code shows that based on the length of array (n), the run time will get linearly increased. If the run time is considered as 1 unit of time, then it takes only n times 1 unit of time to run the array. Thus, the function runs linearly with input size and this comes with order O(n).

Logarithmic time – O (log n)
An algorithm is said to have a logarithmic time complexity when it reduces the size of the input data in each step. This indicates that the number of operations is not the same as the input size. The number of operations gets reduced as the input size increases. Algorithms with Logarithmic time complexity are found in binary trees or binary search functions. This involves the search of a given value in an array by splitting the array into two and starting searching in one split. This ensures the operation is not done on every element of the data.

Quadratic time – O (n^2)
An algorithm is said to have a non – linear time complexity where the running time increases non-linearly (n^2) with the length of the input. Generally, nested loops come under this time complexity order where for one loop takes O(n) and if the function involves loop within a loop, then it goes for O(n)*O(n) = O(n^2) order.

Similarly, if there are ‘m’ loops defined in the function, then the order is given by O (n ^ m), which are called as polynomial time complexity functions.

The order of growth for all time complexities are indicated in the graph below:


Thus, the above illustration gives a fair idea on how each function gets the order notation based on the relation between run time against the number of input data size and number of operations performed on them.

How to evaluate an algorithm for Time complexity?
We have seen how the order notation is given to each function and relation between runtime vs no of operations, input size. Now, it is time to know how to evaluate the Time complexity of an algorithm based on the order notation it gets for each operation & input size and compute the total run time required to run an algorithm for given n.

Let us illustrate on how to evaluate the time complexity of an algorithm with an example:

The algorithm is defined as: 

1. Given 2 input matrix, which are square matrix with order n  

2. The values of each element in both the matrices are selected randomly using np.random function 

3. Initially assigned a result matrix with 0 values of order equal to order of input matrix 

4. Each element of X is multiplied with every element of Y and the resultant value is stored in result matrix 

5. The result matrix is then converted to list type 

6. For every element in the result list, is added together to give final answer

Let us assume cost function C as per unit time taken to run a function while ‘n’ represents the number of times the statement is defined to run in an algorithm.

For example, if time taken to run print function is say 1 microseconds (C) and if the algorithm is defined to run PRINT function for 1000 times (n),

then total run time = (C * n) = 1 microsec * 1000 = 1 millisec

With this let us evaluate the Time complexity for our algorithm:


Run time for each line is given by: 

1
2
3
4
5
6
7
8
9
10
11
Line 1 = C1 * 1 
Line 2 = C2 * 1 
Line 3,4,5 = (C3 * 1) + (C3 * 1) + (C3 * 1)
Line 6,7,8 = (C4*[n+1]) * (C4*[n+1]) * (C4*[n+1]) 
Line 9 = C4*[n] 
Line 10 = C5 * 1 
Line 11 = C2 * 1 
Line 12 = C4*[n+1] 
Line 13 = C4*[n] 
Line 14 = C2 * 1 
Line 15 = C6 * 1
Total run time = (C1*1) + 3(C2*1) + 3(C3*1) + (C4*[n+1]) * (C4*[n+1]) * (C4*[n+1]) + (C4*[n]) + (C5*1) + (C4*[n+1]) + (C4*[n]) + (C6*1)

Replacing all cost with C to estimate the Order of notation,

Total Run Time

1
2
3
4
5
6
= C + 3C + 3C + ([n+1]C * [n+1]C * [n+1]C) + nC + C + [n+1]C + nC + C
                               = 7C + ((n^3) C + 3(n^2) C + 3nC + C + 3nC + 3C
            = 12C + (n^3) C + 3(n^2) C + 6nC
 
            = C(n^3) + C(n^2) + C(n) + C
            = O(n^3) + O(n^2) + O(n) + O (1)
By replacing all cost functions as C, we can get the degree of input size as 3, which tells the order of time complexity of this algorithm. Here, from the final equation, it is evident that the run time varies with the polynomial function of input size ‘n’ as it relates with cubic, quadratic and linear form of input size.

This is how the order of time complexity is evaluated for any given algorithm and to estimate how it spans out in terms of runtime if the input size is increased or decreased. Also note, for simplicity, all cost values like C1, C2, C3, etc. are replaced with C, to know the order of notation. In real-time, we need to know the value for every C, which can give the exact run time of an algorithm given the input value ‘n’.

Time Complexity of Sorting algorithms
Understanding the time complexities of sorting algorithms helps us in picking out the best sorting technique in a situation. Here are the time complexities of some sorting techniques:

Time Complexity of Insertion Sort:
The time complexity of Insertion Sort in the best case is O(n). In the worst case, the time complexity is O(n^2).

Time Complexity of Merge Sort:
This sorting technique has a stable time complexity for all kinds of cases. The time complexity of Merge Sort in the best case is O(nlogn). In the worst case, the time complexity is O(nlogn). This is because Merge Sort implements same number of sorting steps for all kinds of cases.

Time Complexity of Bubble Sort:
The time complexity of Bubble Sort in the best case is O(n). In the worst case, the time complexity is O(n^2).

Time Complexity of Quick Sort:
The time complexity of Quick Sort in the best case is O(nlogn). In the worst case, the time complexity is O(n^2). Quicksort is considered to be the fastest of the sorting algorithms due to its performance of O(nlogn) in best and average cases.

Time Complexity of Searching algorithms
Let us now dive into the time complexities of some Searching Algorithms and understand which of them is faster.

Time Complexity of Linear Search:
Linear Search follows the sequential access. The time complexity of Linear Search in the best case is O(1). In the worst case, the time complexity is O(n).

Time Complexity of Binary Search:
Binary Search is the faster of the two searching algorithms. However, for smaller arrays, linear search does a better job. The time complexity of Binary Search in the best case is O(1). In the worst case, the time complexity is O(log n).

Types of Notations for Time Complexity
Now we will discuss and understand the various notations used for Time Complexity.
Big Oh denotes "fewer than or the same as" <expression> iterations.
Big Omega denotes "more than or the same as" <expression> iterations.
Big Theta denotes "the same as" <expression> iterations.
Little Oh denotes "fewer than" <expression> iterations.
Little Omega denotes "more than" <expression> iterations.

Understanding Notations of Time Complexity with Example
O(expression) is the set of functions that grow slower than or at the same rate as expression. It indicates the maximum required by an algorithm for all input values. It represents the worst case of an algorithm's time complexity.

Omega(expression) is the set of functions that grow faster than or at the same rate as expression. It indicates the minimum time required by an algorithm for all input values. It represents the best case of an algorithm's time complexity.

Theta(expression) consist of all the functions that lie in both O(expression) and Omega(expression). It indicates the average bound of an algorithm. It represents the average case of an algorithm's time complexity.

