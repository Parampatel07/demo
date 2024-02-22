#include <stdio.h>
// write a program to findout minimum and maximum value from array
void main()
{
     // array numeric array (static initilization of array)
     int numbers[] = {25, 87, 10, 5, 50};
     int min = numbers[0]; // assume 1st index has least value
     for(int position=1;position<5;position++)
     {
          if(min > numbers[position])
          {
               min = numbers[position];
          }
     }
     printf("%d", min);
     
}