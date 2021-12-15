#include<stdio.h>
main()
{
	int weeknumber;
	printf("Enter the number of the day");
	scanf("%d",&weeknumber);
	
	switch(weeknumber)
	{case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;		
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Thursday");
		break;
	case 6:
		printf("Friday");
		break;
	case 7:
		printf("Saturday");
		break;
	default:
	printf("enter the number between 1-7");
	}
						
}
