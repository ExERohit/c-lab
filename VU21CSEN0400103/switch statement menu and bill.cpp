#include<stdio.h>
main()
{
	int bill,burger,quantity;
	char k;
	printf("Press b for burger,f for frenchfries,p for pizza,s for sandwich");
	scanf("%c",&k);
	switch(k)
	{
		case 'b':
			printf("Enter the quantity of the Burger");
			scanf("%d",&quantity);
			burger=200;
			bill=(quantity*burger);
			printf("The bill is %d",bill);
			break;
		case 'f':
			printf("Enter the quantity of the French fries");
			scanf("%d",&quantity);
			bill=(quantity*50);
			printf("the bill is %d",bill);
			break;
		case 'p':
			printf("Enter the quantity of pizza");
			scanf("%d",&quantity);
			bill=(quantity*500);
			printf("the bill is %d",bill);
			break;
		case 's':
			printf("enter the quantity of sandwich");
			scanf("%d",&quantity);
			bill=(quantity*150);
			printf("the bill is %d",bill);
			break;
		default:
		printf("you have entered the wrong character");	
			
			
			
	}
	
}
