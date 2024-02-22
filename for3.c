// Write a programe to findout wether the given number is perfect numebr or not
#include <stdio.h>
void main()
{
     int number = 1;
     int multiply_2 = 0;
     int count = 1;
     int answer = 0;

     for(number = 1 ; number < 3200000 ; number++)
     {
          answer = 0 ;
          multiply_2 = number * 2;
          for (count = 1; count <= number; count++)
          {
               if (number % count == 0)
               {
                    answer = answer + count;
               }
          }
          if (multiply_2 == answer)
          {
               printf("%d ", number);
          }
     }
}