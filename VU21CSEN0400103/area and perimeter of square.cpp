#include<stdio.h>
main()
{
	float side,perimeter,area;
	printf("enter side of the square");
	scanf("%f",&side);
	area=side*side;
	perimeter=4*side;
	printf("area of the square %f",area);
	printf("perimeter of the square %f",perimeter);
}
