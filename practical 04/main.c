#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
int num;
 printf("Enter an integer: ");
 scanf("%d", &num);
 if (number % 2 == 0) {
 printf("%d is an even number.\n", num);
 } else {
 printf("%d is an odd number.\n", num);
 }
 return 0;




 int num;
 printf("Enter an integer: ");
 scanf("%d", &num);
 switch (num % 2) {
 case 0:
 printf("%d is an even number.\n", num);
 break;
 case 1:
 printf("%d is an odd number.\n", num);
 break;
 }
 return 0;



int main() {
 int choice;
 double radius, result;
 printf("Menu:\n");
 printf("1. Calculate circumference of a circle\n");
 printf("2. Calculate area of a circle\n");
 printf("3. Calculate volume of a sphere\n");
 printf("Enter your choice (1-3): ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 printf("Enter the radius of the circle: ");
 scanf("%lf", &radius);
 result = 2 * PI * radius;
 printf("The circumference of the circle is: %.2lf\n", result);
 break;
 case 2:
 printf("Enter the radius of the circle: ");
 scanf("%lf", &radius);
 result = PI * pow(radius, 2);
 printf("The area of the circle is: %.2lf\n", result);
 break;
 case 3:
 printf("Enter the radius of the sphere: ");
 scanf("%lf", &radius);
 result = (4.0 / 3.0) * PI * pow(radius, 3);
 printf("The volume of the sphere is: %.2lf\n", result);
 break;
 default:
 printf("Invalid choice!\n");
 }
 return 0;


 char ch;
 printf("Enter a character: ");
 scanf("%c", &ch);
 switch (ch) {
 case 'a':printf(“a is a vowel”);break;
 case 'e': printf(“e is a vowel”);break;
 case 'i': printf(“I is a vowel”);break;
 case 'o': printf(“o is a vowel”);break;
 case 'u': printf(“u is a vowel”);break;
 default:
 printf("%ch is not a vowel.\n", letter);
 }
 return 0;


 int month;
 printf("Enter the month number (1-12): ");
 scanf("%d", &month);
 switch (month) {
 case 1:printf("January has 31 days.\n");
 break;
 case 2: printf("February has 28 days.\n");
 break;
 case 3:printf("March has 31 days.\n");
 break;
 case 4: printf("April has 30 days.\n");
 break;
 case 5:printf("May has 31 days.\n");
 break;
 case 6:printf("June has 30 days.\n");
 break;
 case 7: printf("July has 31 days.\n");
 break;
 case 8:printf("August has 31 days.\n");
 break;
 case 9: printf("September has 30 days.\n");
 break;
 case 10:printf("October has 31 days.\n");
 break;
 case 11:printf("November has 30 days.\n");
 break;
 case 12:
 printf("December has 31 days.\n");
 break;
 default:
 printf("Invalid month number.\n");
 }
 return 0
}
