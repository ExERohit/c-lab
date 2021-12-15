#include<stdio.h>
main()
{
	float radius,area,perimeter;
	printf("enter the radius of the circle");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("area of the circle%f",area);
	perimeter=2*3.14*radius;
	printf("perimeter of the circle%f",perimeter);
}
