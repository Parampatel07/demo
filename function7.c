// Write a programe to findout bmi using function
#include <stdio.h>

float footToMeter(int foot)
{
     float meter = 0;
     meter = foot / 3.281;
     return meter;
}

float inchToMeter(int inch)
{
     return inch / 39.37;
}

float totalMeter(int foot, int inch)
{
     return footToMeter(foot) + inchToMeter(inch);
}

float bmi(float weight, int foot, int inch)
{
     float total_meter = totalMeter(foot, inch);
     float bmi = weight / (total_meter * total_meter);
     printf("\nThe value of bmi is %f ", bmi);
     return bmi;
}

void category(float bmi)
{
     if (bmi > 16 && bmi <= 18.5)
          printf("You are underweight ");
     else if (bmi > 18.5 && bmi <= 25)
          printf("You are normale weight ");
     else if (bmi > 25 && bmi <= 30)
          printf("You are overweight ");
     else if (bmi > 30 && bmi <= 35)
          printf("You are obese degree 1 ");
     else if (bmi > 35)
          printf("you are extremely obese degree 2 ");
}

void main()
{
     float weight = 0;
     int foot = 0;
     int inch = 0;

     printf("Enter value of weight ");
     scanf("%f", &weight);
     printf("Enter value of foot ");
     scanf("%d", &foot);
     printf("Enter value of inch ");
     scanf("%d", &inch);

     category(bmi(weight, foot, inch));
}