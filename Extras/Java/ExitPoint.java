/*
We are given a matrx of 0s and 1s. the user enters the matrix from 0, 0.
Every time the user encounters 1, it turns 90 degrees to the right. 
For a given input, we need to find where will the user finally exit?

Input
4   //size of the square matrix
0   0   1   0
1   0   0   0
0   0   0   0
1   0   1   0

Output
1, 3    //cordinates of exit point (indexes)
*/
import java.util.*;

public class ExitPoint {
    // Function to calculate exit point
    public static void calculatePoint(int arr[][]) {
        int i=0;
        int j=0;
        int dir = 0;
        while(true){
            dir = (dir + arr[i][j]) % 4;
            // Keeping track of direction
            if (dir == 0) {
                j+=1;
            }
            else if (dir ==1) {
                i+=1;
            }
            else if (dir == 2) {
                j-=1;
            }
            else if (dir == 3) {
                i-=1;
            }
            // Checking if we have exited or not
            if (i<0){
                i+=1;
                break;
            }
            else if(j<0){
                j+=1;
                break;
            }
            else if(j == arr[0].length){
                j-=1;
                break;
            }
            else if (i == arr.length) {
                i--;
                break;
            }
        }
        System.out.print(i + ", " + j);
    }
    // main()
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        System.out.println("Enter the row size of the square matrix: ");
        int n = ip.nextInt();
        System.out.println("Enter the column size of the square matrix: ");
        int m = ip.nextInt();
        int[][] arr = new int[n][m];
        System.out.println("Enter the elements of matrix (only 0 and 1): ");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++){
                arr[i][j] = ip.nextInt();
            }
        }
        calculatePoint(arr);
        ip.close();
    }
    
}