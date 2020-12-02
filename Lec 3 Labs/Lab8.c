#include<stdio.h>

int main()
{
	
	int numb,i,j;
	printf("Enter Number Of Highet: ");
	scanf("%d",&numb);
	
	for(i=1;i<=numb;i++)
	{
		for(j=1;j<=numb-i;j++)
			printf(" ");
	    
		
		for(j=1;j<=2*i-1;j++)
		 printf("*");	
	 
	 
	  printf("\n");
	}

	
	
	
	
	
	
	return 0;
}