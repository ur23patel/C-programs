#include<stdio.h>
int findlargest(int[],int);
main()
{
	int arr[10],i,large,size;
	
	printf("ENTER ARRAY size :");
	scanf("%d",&size);
	
	printf("ENTER %d ARRAY ELEMENTS:", size);
	
	for(i=0;i<=size;i++)
	
	scanf("%d",&arr[i]);
	
	large = findlargest(arr,size);
	
	printf("\n largest number= %d",large);
	
}
int findlargest(int arr[],int n)
{
	 int lrg,i=0;
	lrg=arr[i];
	while(i<n)
	{
		if(lrg<arr[i])
		lrg=arr[i];
		i++;
	}
}
