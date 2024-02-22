// write a program to findout power of given number using given exponent
#include <stdio.h>
void main()
{
     int power = 0;
     int base = 0;
     int exponent = 0;
     int count = 0;

     printf("Enter value of base ");
     scanf("%d", &base);
     printf("Enter value of power ");
     scanf("%d", &power);
     // base * base * base * base * base
     exponent = base * base; // 4
     for (count = 2; count < power; count++)
     {
          exponent = exponent * base;
     }
     printf("%d ",exponent);
     // exponent = exponent * base;
     // exponent = exponent * base;
}