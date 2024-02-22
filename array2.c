// Write a programe to take name as input from user
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

     for (count = 0; count < 25; count++)
     {
          printf("%c", name[count]);
          if(name[count]=='\n')
          {
               break;
          }
     }
}