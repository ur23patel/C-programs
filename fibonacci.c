#include<stdio.h>
main()
{
	int a=0,b=1,c=0,i,terms;
	printf("ENTER NUMBER OF TERMS:");
	scanf("%d",&terms);
	
	printf("FIBONACCI TERMS:\n");
	
	for(i=1;i<=terms;i++)
	{
		printf("%d ",c);
		
		a=b;
		b=c;
		c=a+b;
	}
	
	
}
