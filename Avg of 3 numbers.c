#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,avg;
    printf("Hi.... \nPlease enter the first number\n");
    scanf("%f",&a);
    printf("Please enter the second number\n");
    scanf("%f",&b);
    printf("Please enter the third number\n");
    scanf("%f",&c);
    avg = (a+b+c)/3;
    printf("So the average of your three numbers is: %.2f",avg);
    getch();
}
