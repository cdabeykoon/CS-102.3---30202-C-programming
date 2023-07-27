#include <stdio.h>
#include <stdlib.h>

int main()
{

  int no1,no2,max;
  printf("Enter two numbers");
  scanf("%d %d",&no1,&no2);
  if(no1>no2)
  max=no1;
  else
  max=no2;
  printf("The highest number is %d \n",max)


   int n1,n2,n3,max,min;
   printf("Enter three numbers");
   scanf("%d %d %d",&n1,&n2,&n3);
   max=n1;
   if(n2>max)
   max=n2;
   if(n3>max)
   max=n3;
   printf("The largest number is %d \n",max);
   printf("Enter three numbers");
   scanf("%d %d %d",&n1,&n2,&n3);
   min=n1;
   if(n2<min)
   min=n2;
   if(n3<min)
   min=n3;
   printf("The smallest number is %d \n",min)

 char name [100];
 float basicsalary,newsalary,increment;
 printf("Enter employee name:");
 scanf("%s",&name);
 printf("Enter basic salary:");
 scanf("%f",&basicsalary);
 if(basicsalary<5000)
 increment=0.05*basicsalary;
 else if (basicsalary>=5000 && basicsalary<10000)
 increment=0.1*basicsalary;
 else increment=0.15*basicsalary;
 newsalary=basicsalary+increment;
 printf("Employee Name:%s\n",name);
 printf("newsalary;%.2f\n",newsalary);


 double radius, diameter, circumference, area;
 printf("Enter the radius of the circle: ");
 scanf("%lf", &radius);
 diameter = 2 * radius;
 circumference = 2 * PI * radius;
 area = PI * radius * radius;
 printf("Diameter: %.2f\n", diameter);
 printf("Circumference: %.2f\n", circumference);
 printf("Area: %.2f\n", area);
 return 0;


 int num1, num2;
 // Read the two integers from the user
 printf("Enter the first integer: ");
 scanf("%d", &num1);
 printf("Enter the second integer: ");
 scanf("%d", &num2);
 // Check if the first integer is a multiple of the second
 if (num2 != 0 && num1 % num2 == 0) {
 printf("%d is a multiple of %d\n", num1, num2);
 } else {
 printf("%d is not a multiple of %d\n", num1, num2);
 }
 return 0;
}


 int num1, num2;
 // Read the two integers from the user
 printf("Enter the first integer: ");
 scanf("%d", &num1);
 printf("Enter the second integer: ");
 scanf("%d", &num2);
 // Check if the first integer is a multiple of the second
 if (num2 != 0 && num1 % num2 == 0) {
 printf("%d is a multiple of %d\n", num1, num2);
 } else {
 printf("%d is not a multiple of %d\n", num1, num2);
 }
 return 0;


int main() {
 float basicSalary;
 int yearsOfService;
 char city;
 float monthlySales;
 float additionalAllowance = 0;
 float bonusPercentage = 0;
 float bonusAmount;
 float grossRemuneration;
 printf("Enter the basic salary: ");
 scanf("%f", &basicSalary);
 printf("Enter the number of years of service: ");
 scanf("%d", &yearsOfService);
 printf("Enter the city (C for Colombo, any other character for other cities): ");
 scanf(" %c", &city);
 printf("Enter the monthly sales: ");
 scanf("%f", &monthlySales);
 if (yearsOfService > 5) {
 additionalAllowance = 0.1 * basicSalary;
 }
 if (city == 'C') {
 additionalAllowance += 2500;
 }
 if (monthlySales >= 0 && monthlySales <= 25000) {
 bonusPercentage = 0.1;
 } else if (monthlySales > 25000 && monthlySales <= 50000) {
 bonusPercentage = 0.12;
 } else if (monthlySales > 50000) {
 bonusPercentage = 0.15;
 }
 bonusAmount = bonusPercentage * monthlySales;
 grossRemuneration = basicSalary + additionalAllowance + bonusAmount;
 printf("Gross Monthly Remuneration: %.2f\n", grossRemuneration);
 return 0;

}
