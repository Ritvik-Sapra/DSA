/*
This function implements partition technique of Quick sort to sort a binnary
array. This is also useful in understanding partitioning any two types of 
elements.
*/

void binSort(int A[], int N)
{
   int i = -1, j = N;
    while(true)  {
        do { i++; } while(A[i] == 0);
        do { j--; } while(A[j] == 1);
        if(i>=j)
            return;
        std::swap(A[i], A[j]);
    }
}
