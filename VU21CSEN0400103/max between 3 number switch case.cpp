#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	printf("Enter the third number");
	scanf("%d",&c);
	switch (a>b && a>c)
		{
			case 1:
			printf("%d is the maximum",a);
			break;
			case 0:
				switch(b>a && b>c)
				{
					case 1:
					printf("%d is the maximum",b);
					break;
					case 0:
						switch(c>a && c>b)
						{
							printf("%d is the maximum",c);
						}
				}
		}
		
			
}
