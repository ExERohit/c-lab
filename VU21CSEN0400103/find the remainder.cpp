#include<stdio.h>
main()
{
	int dividend,divisor,remainder;
	printf("enter the dividend :");
	scanf("%d",&dividend);
	printf("enter the divisor :");
	scanf("%d",&divisor);
	remainder=dividend-(dividend/divisor)*divisor;
	printf("the remainder is %d",remainder);
	}

