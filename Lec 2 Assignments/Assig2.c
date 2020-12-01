#include <stdio.h>
#include <stdlib.h>

int main()
{
    char oper,other;
    float num1,num2;
    printf("Enter Your First Num: ");
     scanf("%f",&num1);
      printf("Enter Your Second Num: ");
     scanf("%f",&num2);
   Loop: printf("%s","Enter Your operation (+,-,*,/,%): ");
    scanf("%s",&oper);

   switch(oper){
           printf("%s","Enter Your operation (+,-,*,/,%): ");
    case '+': printf("Sum =%0.2f",num1+num2);
    break;
        case '-': printf("Sub= %0.2f",num1-num2);

    break;
        case '*': printf("Mul= %0.2f",num1*num2);

    break;
        case '/': printf("Div= %0.2f",num1/num2);

    break;

        case '%': printf("Prec= %d",(int)num1%(int)num2);
    break;

    default:
                  printf("Error ! incorrect operation!");

    }

    return 0;

}
