#include<stdio.h>

int main()
{
	int numb,sum=0,i,y;
	float avg;
	printf("Enter How Many numbers: ");
	scanf("%d",&y);
	for(i=0;i<y;i++)
	{
    scanf("%d",&numb);
	sum=sum+numb;
	}
	printf("Sum= %d \n",sum);
	avg=sum/y;
	printf("Avg = %.3f",avg);
	
	
	
	
	
	
	
	return 0;
}