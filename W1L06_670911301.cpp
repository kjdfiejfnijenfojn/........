#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
	int x1,x2,y1,y2;
	float d;
	printf("Enter x1 :");
	scanf("%d",&x1);
	printf("Enter y1 :");
	scanf("%d",&y1);
	printf("Enter x2 :");
	scanf("%d",&x2);
	printf("Enter y2 :");
	scanf("%d",&y2);
	d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("d=%.3f",d);
	getch();
	
}
