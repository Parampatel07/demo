// Write a programe to take 5 student marks as input from user and display it
#include <stdio.h>
void main()
{
     int student[5];
     int count = 0;
     int total = 0;
     float average = 0;
     for (count = 0; count < 5; count++)
     {
          printf("Enter value of marks for student %d ", count + 1);
          scanf("%d", &student[count]);
     }
     for (count = 0; count < 5; count++)
     {
          printf("\nMarks for student %d are %d ", count + 1, student[count]);
     }
     for (count = 0; count < 5; count++)
     {
          total = total + student[count];
     }
     printf("\n\nTotal of all student is %d ", total);
     average = total / 5;
     printf("\n\nAverage of all student is %f ",average);
     // total = total + student[1];
     // total = total + student[2];
     // total = total + student[3];
     // total = total + student[4];

     // printf("\nMarks for student 2 are %d ", student[1]);
     // printf("\nMarks for student 3 are %d ", student[2]);
     // printf("\nMarks for student 4 are %d ", student[3]);
     // printf("\nMarks for student 5 are %d ", student[4]);
     // printf("Enter value of marks for student 2 ");
     // scanf("%d", &student[1]);
     // printf("Enter value of marks for student 3 ");
     // scanf("%d", &student[2]);
     // printf("Enter value of marks for student 4 ");
     // scanf("%d", &student[3]);
     // printf("Enter value of marks for student 5 ");
     // scanf("%d", &student[4]);
}