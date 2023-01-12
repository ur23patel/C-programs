#include<stdio.h>
main()
{
	int num1,num2,ans;
	printf("ENTER THE ANY TWO VALUE:");
	scanf("%d%d",&num1,&num2);
	
	ans=num1+num2;
	printf("\n addition=%d",ans);
	ans=num1-num2;
	printf("\n subtraction=%d",ans);
	ans=num1*num2;
	printf("\n multiplication=%d",ans);
	ans=num1/num2;
	printf("\n division=%f",ans);
	ans=num1%num2;
	printf("\n modulo=%f",ans);
}
