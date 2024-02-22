// Write a programe to print hollow inverted half pyramid
// https://i1.faceprep.in/fp/articles/img/46684 1580817324.png
#include <stdio.h>
void main()
{
     int count = 0;
     int space = 0;
     int flash = 0;
     int number = 5;
     for (count = 0; count < 8; count++)
     {
          printf("*");
     }
     for (flash = 5; flash > 0; flash--)
     {
          printf("\n");
          printf("*");
          for (space = 0; space < flash; space++)
          {
               printf(" ");
          }
          printf("*");
     }
     // printf("\n");
     // printf("*");
     // for (space = 0; space < 4; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // for (space = 0; space < 3; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // for (space = 0; space < 2; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // printf(" ");
     // printf("*");
     printf("\n");
     printf("*");
}