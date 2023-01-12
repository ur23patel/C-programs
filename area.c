#include<stdio.h>
#define PI 3.141
main()
{
	int width,length,RECT_AREA,base,height,RECT_TRI;
	float radius,ans;
	
	//AREA OF CIRCLE
	printf("\n AREA OF CIRCLE");
	printf("\n ENTER RADIUS VALUE OF CIRCLE:");
	scanf("%f",&radius);
	ans= PI * radius * radius;
	printf("\n AREA OF CIRCLE IS: %0.2f",ans);
	
	//AREA OF RECTANGLE
	printf("\n AREA OF RECTANGLE");
	printf("\n ENTER THE WIDTH:");
	scanf("%d",&width);
	printf("\n ENTER THE LENGTH:");
	scanf("%d",&length);
	
	RECT_AREA = width * length;
	
	printf("\n ARAE OF RECTANGLE IS: %d",RECT_AREA);
	
	//AREA OF TRIANGLE
	printf("\nAREA OF TRIANGLE");
	printf("\n ENTER THE BASE VALUE:");
	scanf("%d",&base);
	printf("ENTER THE HEIGHT FROM BASE:");
	scanf("%d",&height);
	
	RECT_TRI = (base * height) / 2;	
	
	printf("AREA OF TRIANGLE IS:%d", RECT_TRI);
	
	
}
