#include<stdio.h>
int main()
{
	char a;
	printf("enter the character or number");
	scanf("%c",&a);
	switch (a)
	{
		case 'a'...'z':
			printf("its a lowercase character");
			break;
		case 'A'...'Z':
			printf("its a uppercase character");
			break;
		case '0'...'9':
			printf("its a number");
			break;
		default :
			printf("it's a special character");}
	}
