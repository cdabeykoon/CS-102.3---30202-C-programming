#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    while (i <= 100) {
    printf("%d ", i);
    i++;
    }
    return 0;



    int i = 0;
    do {
       printf("%d ", i);
       i++;
    } while (i <= 100);
    return 0;



    for (int i = 0; i <= 100; i++) {
   printf("%d ", i);
   }
   return 0;


int marks[10];
 int total = 0;
 float average;
 printf("Enter 10 marks:\n");
 for (int i = 0; i < 10; i++) {
 printf("Mark %d: ", i + 1);
 scanf("%d", &marks[i]);
 total += marks[i];
 }
 average = (float)total / 10;
 printf("Total: %d\n", total);
 printf("Average: %.2f\n", average);
 if (average < 50) {
 printf("Fail!\n");
 } else {
 printf("Pass!\n");
 }

 return 0;


 int number;
 int factorial = 1;
 printf("Enter a number: ");
 scanf("%d", &number);
 if (number < 0) {
 printf("Factorial is not defined for negative numbers.\n");
 } else {
 for (int i = number; i >= 1; i--) {
 factorial *= i;
 }
 printf("Factorial of %d is: %d\n", number, factorial);
 }
 return 0;


 int number;
 int sum = 0;
 printf("Enter a number: ");
 scanf("%d", &number);
 int remainder;
 while (number > 0) {
 remainder = number % 10;
 sum += remainder;
 number /= 10;
 }
 printf("Sum of digits: %d\n", sum);
 return 0;


 int number;
 int reversedNumber = 0;
 int remainder;
 printf("Enter a number: ");
 scanf("%d", &number);
 do {
 remainder = number % 10;
 reversedNumber = reversedNumber * 10 + remainder;
 number /= 10;
 } while (number != 0);
 printf("Reversed number: %d\n", reversedNumber);
 return 0;


 int base, exponent;
 int result = 1;
 printf("Enter the base: ");
 scanf("%d", &base);
 printf("Enter the exponent: ");
 scanf("%d", &exponent);
 if (exponent < 0) {
 printf("Exponent should be a non-negative integer.\n");
 } else {
 for (int i = 0; i < exponent; i++) {
 result *= base;
 }
 printf("%d raised to the power %d is: %d\n", base, exponent, result);
 }
 return 0;

 int n = 10;
 int first = 0, second = 1;
 printf("Fibonacci Sequence: ");
 for (int i = 0; i < n; i++) {
 printf("%d ", first);
 int next = first + second;
 first = second;
 second = next;
 }
 printf("\n");
 return 0;
}
