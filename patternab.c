#include<stdio.h>
main()
{
	int i,j,n;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",(j+64));
		}
		printf("\n");
	}
	
}
