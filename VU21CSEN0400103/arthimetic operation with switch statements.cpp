#include<stdio.h>
main()
{
	int a,b,c;
	char op;
	printf("enter op");
	scanf("%c",&op);
	printf("enter numbers a and b");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case '+':
			c=a+b;
			printf("%d",&c);
			break;
		case '-':
			c=a-b;
			printf("%d",&c);
			break;
		case '*':
			c=a*b;
			printf("%d",&c);
			break;
		case '/':
			c=a/b;
			printf("%d",&c);
			break;
		default:
		printf("wrong operator");			
	}
}
