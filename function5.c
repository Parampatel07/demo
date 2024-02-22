// Example of function with argument with return value
// Create a calc
// -> Addition
// -> subtraction
// -> multiplication
// -> division
// -> equality
// -> min
// -> max
#include <stdio.h>

int getAddition(int number1, int number2)
{
     int answer = 0;
     answer = number1 + number2;
     return answer;
}

int getSub(int number1, int number2)
{
     int answer = 0;
     answer = number1 - number2;
     return answer;
}

int getMulti(int number1, int number2)
{
     int answer = 0;
     answer = number1 * number2;
     return answer;
}

int getDiv(int number1, int number2)
{
     int answer = 0;
     answer = number1 / number2;
     return answer;
}

void getEquality(int number1, int number2)
{
     if (number1 == number2)
     {
          printf("both are same ");
     }
     else
     {
          printf("both are not same ");
     }
}

void getMin(int number1, int number2)
{
     if (number1 < number2)
     {
          printf("Number 1 is smaller ");
     }
     else if (number2 < number1)
     {
          printf("Number 2 is smaller ");
     }
}

void getMax(int number1, int number2)
{
     if (number1 > number2)
     {
          printf("Number 1 is greater ");
     }
     else if (number2 > number1)
     {
          printf("Number 2 is greater ");
     }
}

void main()
{
     int number1 = 0;
     int number2 = 0;
     int option = 0;
     int result = 0;
     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     printf("\nEnter 1 for addition ");
     printf("\nEnter 2 for subtraction ");
     printf("\nEnter 3 for multiplication ");
     printf("\nEnter 4 for division ");
     printf("\nEnter 5 for equality ");
     printf("\nEnter 6 for min ");
     printf("\nEnter 7 for max ");
     printf("\nSelect any one option ");
     scanf("%d", &option);

     if (option == 1)
     {
          // addition
          result = getAddition(number1, number2);
          printf("The value of answer is %d ", result);
     }
     else if (option == 2)
     {
          // subtraction
          result = getSub(number1, number2);
          printf("The value of answer is %d ", result);
     }
     else if (option == 3)
     {
          // multiplication
          result = getMulti(number1, number2);
          printf("The value of answer is %d ", result);
     }
     else if (option == 4)
     {
          // division
          result = getDiv(number1, number2);
          printf("The value of answer is %d ", result);
     }
     else if (option == 5)
     {
          // equality
          getEquality(number1,number2);
     }
     else if (option == 6)
     {
          // min
          getMin(number1,number2);
     }
     else if (option == 7)
     {
          // max
          getMax(number1,number2);
     }
     else
     {
          printf("Invalid input ");
     }
}