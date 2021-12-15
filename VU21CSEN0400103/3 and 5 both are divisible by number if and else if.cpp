#include<stdio.h>
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	
	if(a%3==0&&a%5==0)
	
	printf("a is divisible by both 5 and 3");
	
	if(a%3==0)
	
	printf("a is divisible by 3");
	
	else if(a%5==0)
	
	printf("a is divisible by 5");
	
	else
	
	printf("a is not divisible by 3 or 5");
}
