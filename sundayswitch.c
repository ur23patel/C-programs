#include<stdio.h>
main()
{
	int week;
	printf("ENTER A NUMBER:");
	scanf("%d",&week);
	switch(week)
	{
		case 1:
			printf("MONDAY");
			break;
			case 2:
			printf("TUESDAY");
			break;
			case 3:
			printf("WEDNESDAY");
			break;
			case 4:
			printf("THURSDAY");
			break;
			case 5:
			printf("FRIDAY");
			break;
			case 6:
			printf("SATURDAY");
			break;
			case 7:
			printf("SUNDAY");
			break;
			default:
				printf("SOMETHING IS WRONG");
	}
}
