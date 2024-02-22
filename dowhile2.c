// Write a programe to create a calc
// ->addition
// ->subrtaction
// ->multiplication
// ->division
// ->max
// ->min
// ->equality
#include <stdio.h>
void main()
{
     int number1 = 0;
     int number2 = 0;
     int option = 0;
     int answer = 0;

     do
     {
          printf("\nEnter value of number 1 ");
          scanf("%d", &number1);
          printf("Enter value of number 2 ");
          scanf("%d", &number2);

          printf("\nEnter 1 for addition ");
          printf("\nEnter 2 for subtraction ");
          printf("\nEnter 3 for multiplication ");
          printf("\nEnter 4 for division ");
          printf("\nEnter 5 for max ");
          printf("\nEnter 6 for min ");
          printf("\nEnter 7 for equality ");
          printf("\nEnter 0 for exit ");
          printf("\nSelect any one option ");
          scanf("%d", &option);

          switch (option)
          {
          case 1:
               answer = number1 + number2;
               printf("THe value of answer is %d ", answer);
               break;

          case 2:
               answer = number1 - number2;
               printf("THe value of answer is %d ", answer);
               break;

          case 3:
               answer = number1 * number2;
               printf("The value of answer is %d ", answer);
               break;

          case 4:
               answer = number1 / number2;
               printf("The value of answer is %d ", answer);
               break;

          case 5:
               if (number1 > number2)
               {
                    printf("Number 1 is greater ");
               }
               else if (number1 < number2)
               {
                    printf("Number 2 is greater ");
               }
               else
               {
                    printf("Both are same ");
               }
               break;

          case 6:
               if (number1 < number2)
               {
                    printf("Number 1 is smaller ");
               }
               else if (number2 < number1)
               {
                    printf("Number 2 is smaller ");
               }
               else
               {
                    printf("Both are same ");
               }
               break;

          case 7:
               if (number1 == number2)
               {
                    printf("Both are same ");
               }
               else
               {
                    printf("both are not same ");
               }
               break;

          case 0:
               printf("Goodbyee..");
               break;

          default:
               printf("Invalid Option ");
               break;
          }
     } while (option != 0);
}