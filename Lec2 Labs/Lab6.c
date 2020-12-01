#include<stdio.h>

int main()
{
	int id,pw; 
	printf("Please Enter Your ID: ");
	scanf("%d",&id);
	
	switch(id)
	{
		case 1234:
		printf("Enter Your Password:");
		scanf("%d",&pw);
		switch(pw)
		{
			case 11111:
			printf("Login Success!");
			break;
			default:
			printf("Wrong Password");
			break;
				}
				break;
			
		default:
		printf("Incorrect ID");
		
	}
	
	
	return 0;
}