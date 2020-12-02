#include<stdio.h>

int main()
{
	int numb,times,i=0;
	printf("Enter Your Number= ");
	scanf("%d",&numb);
	printf("How Many times do you want ? : ");
	scanf("%d",&times);

	while(i<=times)
	{
         printf("%d x %d= %d \n",numb,i+1,numb*(i+1));  
		 i++;
		 
	
	}
	
	
	
	
	
	
	return 0;
}