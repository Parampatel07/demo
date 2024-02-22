// Write a program to findout whether given value exist in array or not. if value found then display its position, else display message value not found
#include <stdio.h>
void main()
{
     int number[5];
     int count = 0;
     int search = 0;
     for (count = 0; count < 5; count++)
     {
          printf("Enter value of number %d ", count + 1);
          scanf("%d", &number[count]);
     }

     for (count = 0; count < 5; count++)
     {
          printf("\nThe value of number %d is %d ", count + 1, number[count]);
     }

     printf("\nEnter value to search ");
     scanf("%d", &search);

     for (count = 0; count < 5; count++)
     {
          if (number[count] == search)
          {
               printf("\nValue found at position %d ",count + 1);
          }
     }
     // if(number[1] == search)
     // {
     //      printf("\nValue found at position 2 ");
     // }
     // if(number[2] == search)
     // {
     //      printf("\nValue found at position 3");
     // }
     // printf("The value of number 2 is %d ",number[1]);
     // printf("The value of number 3 is %d",number[2]);
     // printf("Enter value of number 2 ");
     // scanf("%d", &number[1]);
     // printf("Enter value of number 3 ");
     // scanf("%d", &number[2]);
}