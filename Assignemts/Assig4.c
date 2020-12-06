#include<stdio.h>

int countHoles(int a);

int main()
{
	int numb;
	printf("Enter Your Number: ");
	scanf("%d",&numb);
	countHoles(numb);
	                                                   //                     in case d5lna msln 143
	
	return 0;
}

int countHoles(int a)
{
	int res,check=0;
	do
  {   
    
    res=a%10;
	
    if(res==0 || res==4 || res==6 || res==9)
	{check=check+1;}
	
	else if(res==8)
	{check=check+2;}
		
	else 
	{check=check+0;}
	
	a=a/10;
	
  }	while(a!=0);
		return printf("Number of holes= %d",check);

}