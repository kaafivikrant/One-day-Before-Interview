N and E will be given

Where N is number of nodes and E is number of edges

Ways to store a graph in data structure : 
- Adjacency matrix
- Adjacency list


In Adjacency list Unweighted space complexity is (N + 2E)
In Adjacency list weighted space complexity is (N + 2E) + 2E


E is edges
U and V are nodes
W is weight

for Unweighted graph we declare it as vector<int> adj[E] and in function adj[U].push_back(V)

for Weighted graph we declare it as vector<pair<int,int>> adj[E] and in function adj[U].push_back({V,W})








Sparse means less edges and Dense means more edges



In a complete graph we have n(n−1)/2 edges, where nn is the number of nodes.

Now if a graph is sparse and we use matrix representation then most of the matrix cells remain unused which leads to the waste of memory. Thus we usually don't use matrix representation for sparse graphs. We prefer adjacency list.

But if the graph is dense then the number of edges is close to (the complete) n(n−1)/2n(n−1)/2, or to n2n2 if the graph is directed with self-loops. Then there is no advantage of using adjacency list over matrix.

In terms of space complexity
Adjacency matrix: O(n2)
Adjacency list: O(n+m)
where nn is the number nodes, mm is the number of edges.

When the graph is undirected tree then
Adjacency matrix: O(n2)
Adjacency list: O(n+n) is O(n) (better than n2)

When the graph is directed, complete, with self-loops then
Adjacency matrix: O(n2)
Adjacency list: O(n+n2) is O(n2) (no difference)

And finally, when you implement using matrix, checking if there is an edge between two nodes takes O(1) times, while with an adjacency list, it may take linear time in nn.


Adjacency Matrix

Uses O(n^2) memory
It is fast to lookup and check for presence or absence of a specific edge
between any two nodes O(1)
It is slow to iterate over all edges
It is slow to add/delete a node; a complex operation O(n^2)
It is fast to add a new edge O(1)

Adjacency List

Memory usage depends more on the number of edges (and less on the number of nodes),
which might save a lot of memory if the adjacency matrix is sparse
Finding the presence or absence of specific edge between any two nodes
is slightly slower than with the matrix O(k); where k is the number of neighbors nodes
It is fast to iterate over all edges because you can access any node neighbors directly
It is fast to add/delete a node; easier than the matrix representation
It fast to add a new edge O(1)

