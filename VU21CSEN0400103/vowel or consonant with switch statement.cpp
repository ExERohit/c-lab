#include<stdio.h>
main()
{
	char a,e,i,o,u;
	printf("enter a alphabet:\n");
	scanf("%c",&a);
	switch (a)
	{
		case'a':
			printf("a is an vowel");
			break;
		case 'e':
			printf("e is an vowel");
			break;
		case 'i':
			printf("i is an vowel");
			break;
		case 'o':
			printf("o is an vowel");
			break;
		case 'u':
			printf("u is an vowel");
		default:
		 	printf("entered character is a consonant");	
	}
}
