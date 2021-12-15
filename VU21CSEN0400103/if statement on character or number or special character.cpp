#include<stdio.h>
main()
{
	char c;
	printf("ENTER CHARACTER OR NUMBER OR SPECIAL CHARACTER");
	scanf("%c",&c);
	if (c>='a'&& c<='z' || c<='A' && c>='Z')
	printf("its a character");
	else if (c>='0' && c<='9')
	printf("its a number");
	else
	printf("its a special character");
}
