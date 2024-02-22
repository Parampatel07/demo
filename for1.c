// Write a programe to print mulitplication table of 5
// 5 x 1 = 5
// 5 x 2 = 10
// ....
// 5 x 10 = 50
#include <stdio.h>
void main()
{
     int table = 5;
     int number = 1;
     int answer = 5;

     printf("Enter value of table ");
     scanf("%d", &table);

     for (answer = 1; number <= 10; number++)
     {
          answer = table * number;
          printf("\n%d x %d = %d ", table, number, answer);
          // number = number + 1;
     }
     // answer = table * number;
     // printf("\n%d x %d = %d ",table,number,answer);
     // number++;
     // answer = table * number ;
     // printf("\n%d x %d = %d ",table,number,answer);
     // number++;
     // answer = table * number ;
     // printf("\n%d x %d = %d ",table,number,answer);
}