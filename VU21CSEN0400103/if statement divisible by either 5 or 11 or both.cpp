#include<stdio.h>
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("it is divisible by both 5 and 11");
	}
	else if(a%5==0)
	{
		printf("it is divisible by 5");
	}
	else if(a%11==0)
	{
		printf("it is divisible by 11");
	}
	else
	{
		printf("not divisible by neither 5 or11");
	}
}
