#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	printf("Enter the third number");
	scanf("%d",&c);
	if (a>b && a>c)
	{
		printf("first is largest");
	}
	else if(b>a && b>c)
	{
		printf("second is largest");
	}
	else
	{
		printf("third is the largest");
	}}
