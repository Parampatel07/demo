// Write a programe to peform subtraction of 2 variable ( - )
//with input without return value 
#include <stdio.h>
void getSub(int a, int b)
{
     int answer = 0;
     answer = a - b;
     printf("\nThe value of answer is %d ",answer);
}

void main()
{
     int number1 = 0;
     int number2 = 0;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);
     getSub(number1,number2);
     
     getSub(number2,number1);
}