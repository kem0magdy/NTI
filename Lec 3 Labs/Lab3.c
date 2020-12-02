#include<stdio.h>

int main()
{
	int numb;
	printf("Enter The Answer Of 3x4= ");
	scanf("%d",&numb);
	while(numb!=12)
	{
		
			printf("Wrong Answer!, Try Again \n");
			scanf("%d",&numb);
			
	}
	
	printf("Correct Answer!");

	
	
	
	
	
	
	return 0;
}