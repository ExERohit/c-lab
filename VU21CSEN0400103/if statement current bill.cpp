#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the number of units");
	scanf("%d",&a);
	if(a<=50)
	{
	b=(a*1);
	}
	printf("Electricity bill is %d",b)
	else if(a<=100 && a>=51)
	b=(a*2);
	printf("Electricity bill is %d",b);

}
