// without input with return value function 
// Write a programe to findout area of cylinder
// 2 * pi * r * h + 2 * pi * r *r
#include <stdio.h>

float getPi()
{
     return 3.141592;
}

void main()
{
     int radius = 0;
     int height = 0;
     int answer = 0;
     float pi = 0 ;
     printf("Enter value of radius ");
     scanf("%d", &radius);
     printf("Enter value of height ");
     scanf("%d", &height);
     // pi = getPi();
     answer = (2 * getPi() * radius * height) + (2 * getPi() * (radius * radius));
     printf("the value of answer is %d ",answer);
}