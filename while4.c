// Write a programe to print following pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000
#include <stdio.h>
void main()
{
     int first = 2;
     int second = 1;
     int answer = 0;
     printf("%d ", first);
     printf("%d ", second);
     answer = first + second;
     while (answer <= 3000)
     {
          first = answer; // 3
          printf("%d ", answer);
          answer = second + answer;
          second = answer; // 4
          if (answer < 3000)
          {
               printf("%d ", answer);
          }
          answer = answer + first;
     }
     // first = answer;
     // printf("%d ", answer);
     // answer = answer + second;
     // second = answer;
     // printf("%d ", answer);
     // answer = answer + first;
     // first = answer;
     // printf("%d ", answer);
     // answer = answer + second;
     // printf("%d ", answer);
     // answer = answer + first;
     // printf("%d ", answer);
}

// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000