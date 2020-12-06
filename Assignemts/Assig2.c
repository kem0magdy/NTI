#include<stdio.h>


float num1,num2;
float calc(char a);

int main()
{
	char oper;
	printf("Enter The First Number: ");
	scanf("%f",&num1);
	printf("Enter The Second Number: ");
	scanf("%f",&num2);
	printf("Choice Your Operation (+ , - ,* ,/): ");
	scanf("%s",&oper);
    calc(oper);
	
	
	return 0;
}
float calc(char a)
{
	switch(a){
        case '+': printf("Sum =%0.2f",num1+num2);
    break;
        case '-': printf("Sub= %0.2f",num1-num2);

    break;
        case '*': printf("Mul= %0.2f",num1*num2);

    break;
        case '/': printf("Div= %0.2f",num1/num2);

    break;

    default:
                  printf("Error ! incorrect operation!");

    }
}