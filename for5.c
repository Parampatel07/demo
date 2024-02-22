// write a program to findout all the prime number between given range
#include <stdio.h>
void main()
{
     int start = 0;
     int end = 0;
     int count = 0;
     int prime = 0;
     printf("Enter value of start ");
     scanf("%d", &start);
     printf("Enter value of end ");
     scanf("%d", &end);
     
     for(start = start ; start <= end ; start++)
     {
          for (count = 2; count < start; count++)
          {
               if (start % count == 0)
               {
                    prime = 1;
               }
          }
          if (prime == 0)
          {
               printf("\nIt is prime number %d ", start);
          }
          prime = 0;
          // start++;
     }
}