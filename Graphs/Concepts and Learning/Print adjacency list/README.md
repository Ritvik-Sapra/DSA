Print Adjacency List

Description: Given the adjacency list of a bidirectional graph. Your task is to copy/clone the adjacency list for each vertex and return a new list.

Input:
5 7
0 1
0 4
1 2
1 3
1 4
2 3
3 4

Expected Output: 
0-> 1-> 4
1-> 0-> 2-> 3-> 4
2-> 1-> 3
3-> 1-> 2-> 4
4-> 0-> 1-> 3
