#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the Principal amount: \n");
    scanf("%f",&p);
    printf("Enter the Rate of interest per annum: \n");
    scanf("%f",&r);
    printf("Enter the number of years you want the loan for: \n");
    scanf("%f",&t);
    si=p*r*t;
    printf("The Simple Interest will be: %.2f",si);
    getch();
}
