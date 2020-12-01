#include<stdio.h>

int main()
{
	char alpha;
	printf("Enter Your A Character: ");
	scanf("%c",&alpha);
	
	switch(alpha)
	{
		case 'a':
		case'b':
		case'c':
		case'd':
		case'e':
		case'f':
		case'g':
		case'h':
		case'i':
		case'j':
		case'k':
		case'l':
		case'm':
		case'n':
		case'o':
		case'p':
		case'q':
		case'r':
		case's':
		case't':
		case'u':
		case'v':
		case'w':
		case'x':
		case'y':
		case'z':
		printf("Your Character is Alphabet!");
		break;
		default:
		printf("Your Character is not Alphabet!");
	}
		
	return 0;
}