#include<stdio.h>
#include<conio.h>
int main()
{
float cost,selling_price,profit_percentage;
printf("Hi there...\n\nPlease enter the cost of your product:\n");
scanf("%f",&cost);
printf("please give the selling price:\n");
scanf("%f",&selling_price);
profit_percentage = (selling_price-cost)/cost*100;
printf("Ok... So your profit percentage is:%0.0f%%\n\n",profit_percentage);
getch();
}
