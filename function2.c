#include <stdio.h>
#include <stdlib.h>
void printSybmol(char sy, int sz)
{
     int count = 0;
     for (count = 0; count < sz; count++)
     {
          printf("%c", sy);
     }
}

void main()
{
     char symbol = ' ';
     int size = 0;

     printf("Enter symbol to print ");
     scanf("%c", &symbol);
     printf("Enter size of line ");
     scanf("%d", &size);
     printSybmol(symbol, size);
     printf("\nParam patel\n");

     fflush(stdin);
     printf("Enter symbol to print ");
     scanf("%c", &symbol);
     printf("Enter size of line ");
     scanf("%d", &size);
     printSybmol(symbol,size);
     printf("\nHello world \n");

     fflush(stdin);
     printf("Enter symbol to print ");
     scanf("%c", &symbol);
     printf("Enter size of line ");
     scanf("%d", &size);
     printSybmol(symbol,size);
}