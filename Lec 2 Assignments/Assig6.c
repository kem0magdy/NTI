#include<stdio.h>


int main()
{
	
	float temp;
	printf("Enter The Temp: ");
	scanf("%f",&temp);
	
	if(temp>=0 && temp<30)
		printf(" The required heating time = 7 mins");
	    else if(temp>=30 && temp<60)
		printf(" The required heating time = 5 mins");
		else if(temp>=60 &&temp<90)
		printf(" The required heating time = 3 mins");
		else if(temp>=90)
		printf(" The required heating time = 1 mins");
	else
		printf("Invalid Input!");
			   
			
	
	
	return 0;
}