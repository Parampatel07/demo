// write a program to make sum of two array into third array
#include <stdio.h>
void main()
{
     int number1[5];
     int number2[5];
     int total[5];
     int count = 0;

     for (count = 0; count < 5; count++)
     {
          printf("Enter number %d for first array ", count + 1);
          scanf("%d", &number1[count]);
     }

     for (count = 0; count < 5; count++)
     {
          printf("Enter number %d for second array ", count + 1);
          scanf("%d", &number2[count]);
     }

     for (count = 0; count < 5; count++)
     {
          printf("\nThe value of number %d in first array is %d ", count + 1, number1[count]);
     }
     for (count = 0; count < 5; count++)
     {
          printf("\nThe value of number %d in first array is %d ", count + 1, number2[count]);
     }

     for (count = 0; count < 5; count++)
     {
          total[count] = number1[count] + number2[count];
     }
     printf("\n");
     for (count = 0; count < 5; count++)
     {
          printf("\nThe value of total is %d ", total[count]);
     }

     // total[1] = number1[1] + number2[1];
     // total[2] = number1[2] + number2[2];
     // total[3] = number1[3] + number2[3];
     // total[4] = number1[4] + number2[4];
     // printf("The value of number 2 in first array is %d ",number1[1]);
     // printf("The value of number 3 in first array is %d ",number1[2]);
     // printf("Enter number 2 for second array ");
     // scanf("%d", &number2[1]);
     // printf("Enter number 2 for first array ");
     // scanf("%d",&number1[1]);
     // printf("Enter number 3 for first array ");
     // scanf("%d",&number1[2]);
}