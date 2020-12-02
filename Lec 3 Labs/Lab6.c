#include<stdio.h>
int main()
{
	// taking from user 2 numbers and summing it in infinite loop
	int numb1,numb2;
	
	while(1)
	{   
        printf("Enter First Number= ");
		scanf("%d",&numb1);
		printf("Enter Second Number= ");
		scanf("%d",&numb2);
		printf("Sum= %d \n",numb1+numb2);
		
		
	}
	
	
	return 0;
}