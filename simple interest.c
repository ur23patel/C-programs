#include<stdio.h>
main()
{
	float principle,time,rate,si;
	
	
	printf("ENTER PRINCIPLE:");
	scanf("%f",&principle);
	printf("ENTER TIME:");
	scanf("%f",&time);
	printf("ENTER RATE:");
	scanf("%f",&rate);
	si=(principle*time*rate)/100;
	printf("SIMPLE INTEREST=%f",si);
}
