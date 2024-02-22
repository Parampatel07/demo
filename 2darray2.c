#include <stdio.h>
// write a program to accept input in 2d array and display it
void main()
{
     // 2d array
     int matrix[5][5];
     int total[5];
     int row, column;
     for (row = 0; row < 5; row++) // outer loop for 1st dimension
     {
          for (column = 0; column < 5; column++) // inner for loop for 2nd column
          {
               printf("Enter value for %d row %d column ", row + 1, column + 1);
               scanf("%d", &matrix[row][column]);
          }
     }
     for (row = 0; row < 5; row++) // outer loop for 1st dimension
     {
          for (column = 0; column < 5; column++) // inner for loop for 2nd column
          {
               printf("[%7d]", matrix[row][column]);
          }
          printf("\n");
     }

     for (row = 0; row < 5; row++)
     {
          total[row] = 0;
          for (column = 0; column < 5; column++)
          {
               total[row] = total[row] + matrix[row][column];
          }
     }
     // total[1] = 0;
     // for(column = 0 ; column < 5 ; column++)
     // {
     //      total[1] = total[1] + matrix[1][column];
     // }
     // total[1] = total[1] + matrix[1][1];
     // total[1] = total[1] + matrix[1][2];
     // total[1] = total[1] + matrix[1][3];
     // total[1] = total[1] + matrix[1][4];
     for (column = 0; column < 5; column++)
     {
          printf("\nThe value of total %d is %d ", column + 1, total[column]);
     }
     // printf("\nThe value of total 2 is %d ", total[1]);
     // printf("\nThe value of total 2 is %d ", total[2]);
     // printf("\nThe value of total 2 is %d ", total[3]);
     // printf("\nThe value of total 2 is %d ", total[4]);
     // 10
     // total[0] = total[0] + matrix[0][1]; // 30
     // total[0] = total[0] + matrix[0][2]; // 60
     // total[0] = total[0] + matrix[0][3];
     // total[0] = total[0] + matrix[0][4];
}