#include<stdio.h>


int main()
{
	
	/*
	Taking from user working hours of week , if working hours less than require rate
	Apply disccount 10% on the total working hours
	
	*/
	           float work,rate=50,res;
			   
			  printf("Enter Your Working Hours Of This Week= ");
			  scanf("%f",&work);
			  res=rate*work;
			  
			  if(work<rate) // incase if working hours less than rate
			  {
				  res=res*0.90; // applying 10% discount of salary
		
				  printf("You Salary = %.3f",res);
			  }
				  printf("You Salary =%.3f",res);
			   
			
	
	
	return 0;
}