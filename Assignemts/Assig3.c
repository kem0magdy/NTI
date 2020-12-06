#include<stdio.h>
int num1,num2;
int check(int a,int b);
int main()
{printf("Enter The First Number: ");
	scanf("%d",&num1);
	printf("Enter The Second Number: ");
	scanf("%d",&num2);
    check(num1,num2);	
	return 0;}

int check(int a,int b)
{
	int res1,res2,prime1=1,prime2=1;
	res1=num1/2;
	res2=num2/2;
	/*checking for first number */
   for(int i = 2; i<=res1; i++) 
   {
      if((num1 % i) == 0)  
	  {               
         prime1 = 0;
		 break;
      }
   }

   if (prime1 == 1)
      printf("Your Number is Prime. \n");
   else
      printf("You Number is not a prime number.\n");
   
  	/*checking for first number */
  for(int i = 2; i<=res2; i++) 
   {
      if((num2 % i) == 0)   
	  {                  
         prime2 = 0;
		 break;
      }
   }

   if (prime2 == 1)
      printf("Your Number is Prime.\n");
   else
      printf("You Number is not a prime number.\n");	
}
