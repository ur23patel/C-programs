#include<stdio.h>
main()
{
	int i,n,fact=1;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("\nFACTORIAL OF %d IS:%d",n,fact);
	}
}
