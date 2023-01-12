#include<stdio.h>
main()
{
	int num;
	printf("ENTER AN INTEGER:");
	scanf("%d",&num);
	(num % 2 == 0)?
	(printf("%d is EVEN\n",num)):
	(printf("%d is ODD\n",num));

}
