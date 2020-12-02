#include<stdio.h>

int main()
{
	int id,pw; 
	printf("Please Enter Your ID: ");
	scanf("%d",&id);
	
	switch(id)
	{
		case 1234:

			for(int j=0;j<3;j++)
			{printf("Enter Your Password:");
		    scanf("%d",&pw);
			if(pw==11111)
			{
			printf("Login Success!");
				break;}
			
			printf("No More Try!");
			}
			break;
			
			
		default:
		printf("Incorrect ID");
		
	}
	
	
	return 0;
}