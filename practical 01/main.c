#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Chamathka Abeykoon\n");
   printf("Anuradhapura Central Collage\n");
   printf("\n");

   printf("*\n");
   printf("**\n");
   printf("***\n");
   printf("****\n");
   printf("*****\n");
   printf("\n");

   int Int;
   float Float;
   double Double;
   char Char;
   printf("Enter an integer: ");
   scanf("%d", &Int);
   printf("Enter a float: ");
   scanf("%f", &Float);
   printf("Enter a double: ");
   scanf("%lf", &Double);
   printf("Enter a character: ");
   scanf(" %c", &Char);
   printf("\nValues entered:\n");
   printf("Integer: %d\n",Int);
   printf("Float: %f\n",Float);
   printf("Double: %lf\n",Double);
   printf("Character: %c\n",Char);
   printf("\n");

   int no1,no2,tot;
   printf("Enter first number");
   scanf("%d",&no1);
   printf("Enter second number");
   scanf("%d",&no2);
   tot=no1+no2;
   printf("Total is %d",tot);
   printf("\n");

   float number1, number2, average;
   printf("Enter the first number: \n");
   scanf("%f", &number1);
   printf("Enter the second number: \n");
   scanf("%f", &number2);
   average = (number1 + number2) / 2;
   printf("The average is: %.2f\n", average);
   printf("\n");

   char name[20];
   int birthYear,age;
   printf("Enter student name: ");
   scanf("%s", name);
   printf("Enter birth year: ");
   scanf("%d", &birthYear);
   age=2023-birthYear;
   printf("Student Name: %s\n",name);
   printf("Age: %d\n", age);
   printf("\n");

   int num1, num2;
   printf("Enter the first number: ");
   scanf("%d", &num1);
   printf("Enter the second number: ");
   scanf("%d", &num2);
   printf("First number: %d\n", num2);
   printf("Second number: %d\n", num1);
   printf("\n");


}
