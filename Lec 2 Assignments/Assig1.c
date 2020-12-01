#include<stdio.h>
#include<math.h>


int main()
{
	unsigned int numb,perfect;
	float check;
	printf("Enter The Number: ");
	scanf("%d",&numb);
	
	check=sqrt(numb);
	perfect=check;
	if(perfect==check)
	{printf("Your Number %d is perfect square",numb);}
    else 
    {printf("Your Number %d is not perfect square",numb);}	
	
	
	
	return 0;
}