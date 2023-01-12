#include<stdio.h>
main()
{
	int a[10],n;
	int i,sum=0,odd=0,even=0;
	int SUM_ODD=0, SUM_EVEN=0;

	printf("\nENTER THE NUMBER OF ELEMENTS : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("\nNumbers %d = ",i);
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		{
			even++; // how many even numbers 
			SUM_EVEN +=a[i]; // sum of even numbers
		}
		else
		{
			odd++;  // how many odd numbers
			SUM_ODD+=a[i]; // sum of odd numbers
		}
	}
	printf("\nSum of Even number = %d",SUM_EVEN);
	printf("\nSum of Odd number = %d",SUM_ODD);
	printf("\nTOTAL EVEN NUMBER IS = %d",even);
	printf("\nTOTAL ODD NUMBER IS = %d",odd);


}
