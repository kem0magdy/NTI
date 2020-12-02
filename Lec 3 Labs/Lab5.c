#include<stdio.h>
int main()
{
	int fact=1,numb,i=1;
	printf("Enter Your Number= ");
	scanf("%d",&numb);
	do {
		fact=fact*i;
		i++;
		
		
		
	}while(i<=numb);
		
	printf("Fact= %d \n",fact);
	
	fact=1; i=1;
	while(i<=numb)
	{
		
		fact=fact*i;
		i++;
	}
	printf("Fact= %d",fact);
	
	
	
	return 0;
}