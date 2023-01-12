#include<stdio.h>
main()
{
	int i,n,a[10],sum=0;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&n);
	printf("ENTER ELEMENTS IN ARRAY:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("SUM IS: %d",sum);
}
