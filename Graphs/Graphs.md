There are two types of graphs:

Undirected graphs

Connected graphs

An **undirected graph** is a graph in which the edges do not point in any direction.

A **connected graph** is a graph in which there is always a path from a vertex to any other vertex.

Spanning tree

A spanning tree is a sub-graph of an undirected connected graph, which includes all the vertices of the graph with a minimum possible number of edges. If a vertex is missed, then it is not a spanning tree.

The total number of spanning trees with n vertices that can be created from a complete graph is equal to n^(n-2).

If we have n=4, the maximum number of possible spanning trees is equal to 4^4-2 = 16. Thus, 16 spanning trees can be formed from a complete graph with 4 vertices.

Ex:-

![1689172907954](image/Graphs/1689172907954.png)    ![1689172888180](image/Graphs/1689172888180.png)   ![1689172915257](image/Graphs/1689172915257.png)

 ref. Programz

Adjacency Matrix

An adjacency matrix is a way of representing a graph as a matrix of booleans (0's and 1's). A finite graph can be represented in the form of a square matrix on a computer, where the boolean value of the matrix indicates if there is a direct path between two vertices.

Ex:-

![1689172926652](image/Graphs/1689172926652.png)   ![1689172932912](image/Graphs/1689172932912.png)

ref. :- Programz

Adjacency List

An adjacency list represents a graph as an array of linked lists. The index of the array represents a vertex and each element in its linked list represents the other vertices that form an edge with the vertex.

![](blob:vscode-webview://14juvrd2sq2tfbg9bhkfo06j8mg73u40p1nk1d0dc2a6dgcbo6nd/ca9f6ae1-32ca-44e9-8648-ea541764ac2a)![1689172963587](image/Graphs/1689172963587.png)  ![1689172968953](image/Graphs/1689172968953.png)

ref. :- Programz

Depth First Search (DFS) (stack)

Depth first Search or Depth first traversal is a recursive algorithm for searching all the vertices of a graph or tree data structure. Traversal means visiting all the nodes of a graph.

A standard DFS implementation puts each vertex of the graph into one of two categories:

Visited

Not Visited

![1689172999017](image/Graphs/1689172999017.png)

![1689173026172](image/Graphs/1689173026172.png)

![1689173033799](image/Graphs/1689173033799.png)

![](blob:vscode-webview://14juvrd2sq2tfbg9bhkfo06j8mg73u40p1nk1d0dc2a6dgcbo6nd/7c48a748-7c6e-438e-a817-af024163c9f5)

Breadth first search (queue)

Traversal means visiting all the nodes of a graph. Breadth First Traversal or Breadth First Search is a recursive algorithm for searching all the vertices of a graph or tree data structure.

BFS algorithm

A standard BFS implementation puts each vertex of the graph into one of two categories:

Visited

Not Visited

![](blob:vscode-webview://14juvrd2sq2tfbg9bhkfo06j8mg73u40p1nk1d0dc2a6dgcbo6nd/9ecc834a-6381-4132-aa27-515574b808fd)![1689173043462](image/Graphs/1689173043462.png)

![1689173054310](image/Graphs/1689173054310.png)

![1689173064161](image/Graphs/1689173064161.png)

![](blob:vscode-webview://14juvrd2sq2tfbg9bhkfo06j8mg73u40p1nk1d0dc2a6dgcbo6nd/35b6c351-2233-4555-9906-7e5bac1c3dcb)

![](blob:vscode-webview://14juvrd2sq2tfbg9bhkfo06j8mg73u40p1nk1d0dc2a6dgcbo6nd/811a0bd7-1c1f-4caa-ad21-08330094d9c9)
