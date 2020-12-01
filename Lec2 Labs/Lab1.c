#include<stdio.h>


int main()
{
	           char a=5, b=0 , res;
			   
			   res=a||b;
			   printf("The true value in gcc = %d \n",res);
			   
			   res=b&&a;
			   printf("The false value in gcc = %d\n",res);
	
	
	return 0;
}