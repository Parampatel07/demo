// write a programe to print hollow inverted full pyramid
#include <stdio.h>
void main()
{

     int space = 0;
     int count = 0;
     int plus = 0;
     int minus = 4;
     do
     {
          printf(" ");
          space++;
     } while (space < 6);
     printf("*");
     printf("\n");
     // space = 0;
     // do
     // {
     //      printf(" ");
     //      space++;
     // } while (space < 4);
     // printf("*");
     // printf(" ");
     // printf("*");
     // printf("\n");

     do
     {
          space = 0;
          do
          {
               printf(" ");
               space++;
          } while (space <= minus);
          printf("*");
          count = 0;
          do
          {
               printf(" ");
               count++;
          } while (count <= plus);
          printf("*");
          printf("\n");
          plus = plus + 2;
          minus = minus - 1;
     } while (plus < 10);
     // space = 0;
     // do
     // {
     //      printf(" ");
     //      space++;
     // } while (space < 2);
     // printf("*");
     // count = 0;
     // do
     // {
     //      printf(" ");
     //      count++;
     // } while (count < 5);
     // printf("*");
     // printf("\n");
     // printf(" ");
     // printf("*");
     // count = 0;
     // do
     // {
     //      printf(" ");
     //      count++;
     // } while (count < 7);
     // printf("*");

     // printf("\n");
     count = 0;
     do
     {
          printf("*");
          count++;
     } while (count < 13);
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
}