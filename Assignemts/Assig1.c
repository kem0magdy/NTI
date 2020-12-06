#include<stdio.h>

float cube(float x);

int main()
{
	float numb;
	printf("Enter Your Number: ");
	scanf("%f",&numb);
	float r=cube(numb);
	printf("Cube of %0.3f = %.3f",numb,r);
	
	
	
return 0;	
}

float cube(float x)
{
float res;
res=x*x*x;
return res;
}