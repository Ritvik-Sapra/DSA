Algorithm

1. Declare two lists dx and dy which will contain x and y coordinates of all the 8 neighbors of any cell respectively.
2. Declare a function 'isValid()' to check if the address we are trying to access is valid or not.
3. Declare a queue and a 2D vector to keep track of which all i and j we have visited.
4. Traverse through the grid, if we find 1 and (i, j) is not visited then we push it into queue and mark it as visited. This is starting of an island so increase count.
5. Run a loop until q is empty.
6. Consider if where all we can move from the popped out cell of the queue and keep inserting in queue which are not visited.
7 Return count (no. of islands)

How to solve the problem 'Find no. of islands'?

We are given and adjacency matrix containing characters of either '0' or '1'.
It is an undirected graph and if there is an edge present, there is '1' otherwise there is '0'.

For every cell in the matrix, we have possible 8 neighbors. So we have lists dx and dy for finding all possible 8 neighbors of any given cell. To ensure we don't access any out of memory index, we have writen a isValid() which simply tells us that if we are trying to access a valid index of not. 

In our main function called numIslands(), we first declare 2D vector visited to keep track of which all nodes we have visited. We also declare a queue of pairs to keep track of i and j coulmns we are discovering. 
We consider every (i, j) as a starting source. We check if we have visited/discovered them and if there is '1', i.e. edge between i and j vertices.
If yes, then we increase the 'count' because this is surely one island and push into the queue. We keep traversing. If i and j becomes more than n and m i.e. grid is exhausted then that means graph is completed and everything is connected. Else, we start from the next valid (i, j) and that is another disconnected island. 
In the end we return the count which is our no. of islands in graph.

