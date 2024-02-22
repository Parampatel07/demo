// Write a programe to findout factorial  ( ક્રમગુણિત ) of given number
#include <stdio.h>
void main()
{
     long long int number = 0;
     int answer = 0;
     printf("Enter value of number ");
     scanf("%lld", &number);

     if (number < 0)
     {
          printf("Invalid Number ");
     }
     else
     {
          for (answer = number - 1; answer > 0; answer--)
          {
               number = number * answer;
          }
          printf("%lld ", number);
     }
     // number = number * 3 ;
     // number = number * 2 ;
     // number = number * 1 ;

     // answer = number - 1 ;
     // number = answer * number ;
     // printf("%d ",number);
}