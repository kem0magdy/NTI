#include<stdio.h>


int main()
{
	
	float grade;
	printf("Enter Your Grade= ");
	scanf("%f",&grade);
	
	if(grade>=0 && grade<50)
		printf("Sorry you Failed!");
	else if(grade>=50 && grade<65)
		printf("Your Rainting is Normal!");
		else if(grade>=65 &&grade<75)
		printf("Your Rainting is Good!");
		else if(grade>=75 &&grade<85)
		printf("Your Rainting is Very Good!");
		else if(grade>=85)
		printf("Your Rainting is Excellent!");
	else
		printf("Error ! Unkown Input");
			   
			
	
	
	return 0;
}