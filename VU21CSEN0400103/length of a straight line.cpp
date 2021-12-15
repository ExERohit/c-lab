#include<stdio.h>
#include<math.h>
main()
{
	int x1,y1,x2,y2,l;
	printf("enter value x1");
	scanf("%d",&x1);
	printf("enter value y1");
	scanf("%d",&y1);
	printf("enter value x2");
	scanf("%d",&x2);
	printf("enter value y2");
	scanf("%d",&y2);
	l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("length of straight line%d",l);
}
