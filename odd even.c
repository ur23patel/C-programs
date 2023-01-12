#include<stdio.h>
main()
{
	int num;
	printf("ENTER NUMBER:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d is even");
	}
	else
	{
		printf("%d is odd");
	}
}
