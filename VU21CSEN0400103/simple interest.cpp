#include<stdio.h>
main()
{
	float principle,rateofinterest,time,simpleinterest;
	printf("enter the value of principle");
	scanf("%f",&principle);
	printf("enter the value of rate of interest");
	scanf("%f",&rateofinterest);
	printf("enter the time");
	scanf("%f",&time);
	simpleinterest=principle*rateofinterest*time/100;
	printf("simple interest is%f",simpleinterest);
}
