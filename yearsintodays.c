#include<stdio.h>
main()
{
	int years,days;
	
	printf("ENTER DAYS:");
	scanf("%d",&days);
	
	years=days/365;
	printf("YEARS: %d",years);
	
	printf("\n ENTER YEARS:");
	scanf("%d",&years);
	
	days=years*days;
	printf("DAYS: %d",days);
	
}
