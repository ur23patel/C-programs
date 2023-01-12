#include<stdio.h>
main()
{
	int n,firstdigit,lastdigit,sum=0;
	printf("ENTER VALUE:");
	scanf("%d",&n);
	lastdigit=n%10;
	
	while(n>=10)
	{
		n/=10;
	}
	firstdigit = n;
	sum = firstdigit + lastdigit;
	printf("Sum of first and last digit = %d", sum);
}
