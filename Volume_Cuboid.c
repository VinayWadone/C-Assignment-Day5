#include<stdio.h>
#include<conio.h>
int main()
{
float width, height, length,vol;
printf("Hi there...\nPlease enter the Width, of the cuboid:\n");
scanf("%f",&width);
printf("Please enter the Height, of the cuboid:\n");
scanf("%f",&height);
printf("Please enter the Length, of the cuboid:\n");
scanf("%f",&length);
vol=width*height*length;
printf("Thank you!!!\n\nSo the volume of your Cuboid is:%0.2f cubic units\n\n",vol);
}
