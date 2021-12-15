#include<stdio.h>
main()
{
	int a,b,min;
	printf("enter the value for a");
	scanf("%d",&a);
	printf("enter the value for b");
	scanf("%d",&b);
	min= (a<b)? a:b;
	printf("minimum between a and b is %d,min");
}
