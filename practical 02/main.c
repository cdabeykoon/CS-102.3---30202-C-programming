#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("HI,How OLD ARE YOU?");
    scanf("%d",&age);
    printf("WELCOME %d\n",age);
    printf("LET'S BE FRINDS!\n");
    printf("\n");

    printf("%15d%10d%10d\n", 2, 4,8);
    printf("%15d%10d%10d\n", 3, 9,27);
    printf("%15d%10d%10d\n", 4, 16,64);
    printf("\n");

    int distance;
    int time;
    float averagespeed;
    printf("Enter the distance traveled in meters");
    scanf("%d",&distance);
    printf("Enter the time taken in seconds");
    scanf("%d",&time);
    averagespeed=distance/time;
    printf("The average speed is %.3f m/s\n",averagespeed);
    printf("\n");

    double tempInF;
    printf ("Enter the temperature in Fahrenheit:");
    scanf("%if",&tempInF);
    double tempInC=(5.0/9.0)*(tempInF-32);
    printf("Temperature in Celsius %.3if ",tempInC);


}
