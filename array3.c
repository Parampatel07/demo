// Write a programe to take name as input and print it in reverse
// param
// marap
#include <stdio.h>
void main()
{
     char name[25];
     int count = 0;
     printf("Enter your name ");
     for (count = 0; count < 25; count++)
     {
          scanf("%c", &name[count]);
          if (name[count] == '\n')
          {
               break;
          }
     }

     for (count = count; count >= 0; count--)
     {
          printf("%c", name[count]);
     }
     // printf("%c",name[24]);
}