# Print Adjacency List

Please refer to the [original problem](https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1/?track=DSASP-Graph&batchId=154) for better understanding and try it out yourself.

## Description

Given the adjacency list of a bidirectional graph. Your task is to copy/clone the adjacency list for each vertex and return a new list.

Input:

> 5 7
> 0 1
> 0 4
> 1 2
> 1 3
> 1 4
> 2 3
> 3 4

Expected Output: 

> 0-> 1-> 4
> 1-> 0-> 2-> 3-> 4
> 2-> 1-> 3
> 3-> 1-> 2-> 4
> 4-> 0-> 1-> 3

