
#include<stdio.h>
#include<conio.h>

void main(){
	float a=50;
	float b=3;
	float sum=a+b;
	float sub=a-b;
	
	float mul=a*b;
	float div=a/b;
	
	printf("A= %f \nB: %f",a,b);
	printf("\nSum= %.2f",sum);
	printf("\nSub= %.2f",sub);
	printf("\nMul= %.2f",mul);
	printf("\nDiv= %.1f",div);
	getch();
}
