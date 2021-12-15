#include<stdio.h>
main()
{
	float a=25,b=2,c=25.0,d=2.0,sum=0;
	sum=6+(a/5)*b;
	printf("sum of 1st input%f",sum);
	sum=(a/b)*b;
	printf("sum of 2nd input%f",sum);
	sum=(c/d)*d;
	printf("sum of 3rd input%f",sum);
	sum=-a;
	printf("sum of 4th input%f",sum);
}


