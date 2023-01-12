#include<stdio.h>
main()
{
	int a,b,choice;
	
	printf("ENTER VALUE OF A:");
	scanf("%d",&a);
	printf("ENTER VALUE OF B:");
	scanf("%d",&b);
	printf("ENTER YOUR CHOICE NUMBER:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("ADDITION OF %d AND %d is = %d",a,b,a+b);
			break;
			
		case 2:
			printf("SUBTRACTION OF %d AND %d is = %d",a,b,a-b);
			break;
		case 3:
			printf("multiplication OF %d AND %d is = %d",a,b,a*b);
			break;
		case 4:
			printf("division OF TWO NUMBER is = %d",a,b,a/b);
			break;	
		default:
			printf("ENTER YOUR CORRECT CHOICE.");
			break;
			
	}
}
