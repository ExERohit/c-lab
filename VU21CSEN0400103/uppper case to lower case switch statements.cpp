#include<stdio.h>
main()
{
	char c;
	printf("Enter a character");
	scanf("%c",&c);
	switch(c>='A'&&c<='Z')
	{
		case 1:
			c=c+32;
			printf("the character is %c",c);break;
			case 0:
				switch(c>='a'&&c<='z')
				{
					case 1:
						c=c-32;
						printf("the character is %c",c);break;
					case 0:
						switch (c>='0'&&c<='9')
						{
							case 1:
								printf("the character is a number",c);break;
							default:
								printf("the character is a special character");
						}
						
						
				}
				
				}
				
	}
