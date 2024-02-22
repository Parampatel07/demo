// write a programe to print following pattern
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 10000
#include <stdio.h>
void main()
{
     int number = 0;
     int answer = 0;
     int count = 1;

     printf("%d ", number);
     answer = number + count; // 1

     while (answer < 10000)
     {
          printf("%d ", answer);
          count = count + 1; // 2
          answer = answer + count;
     }
     // 3
     // printf("%d ", answer);
     // count = count + 1;
     // answer = answer + count; // 6
     // printf("%d ", answer);
     // count = count + 1;
     // answer = answer + count;
     // printf("%d ", answer);
     // count = count + 1 ;
     // answer = answer + count;
     // printf("%d ", answer);
     // count = count +  1;
     // answer = answer + count ;
     // printf("%d ",answer);
     // count = count + 1 ;
     // answer = answer + count ;
     // printf("%d ",answer);
}
