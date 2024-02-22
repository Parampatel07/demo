// Write a programe to print half pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 0;
     int number = 5;

     while( flash < 5  )
     {
          while (count < number)
          {
               printf("*");
               count = count + 1;
          }
          printf("\n");
          number = number - 1  ;
          count = 0;
          flash++;
     }
   
}