#include<stdio.h>
main()
{
	int a,k;
	printf("enter a number");
	scanf("%d",&a);
	k=a%2;
	switch(k)
	{
		case 0: printf("given number is even");
		break;
		case 1: printf("given number is odd");
		break;
	}
}
