#include <stdio.h>
// write a program to accept input in 2d array and display it 
void main()
{
     // 2d array
     int matrix[3][5];
     int row,column;
     for(row=0;row<3;row++) //outer loop for 1st dimension
     {
          for(column=0;column<5;column++) //inner for loop for 2nd column
          {
               printf("Enter value for %d row %d column",row+1,column+1);
               scanf("%d",&matrix[row][column]);
          }
     }
     for(row=0;row<3;row++) //outer loop for 1st dimension
     {
          for(column=0;column<5;column++) //inner for loop for 2nd column
          {
               printf("[%7d]",matrix[row][column]);
          }
          printf("\n");
     }
}