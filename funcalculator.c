#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mod();
main()
{
	int num1,num2,ans;
	printf("ENTER NUM1:");
	scanf("%d", &num1);
	printf("ENTER NUM2:");
	scanf("%d", &num2);
	add(num1,num2);
	sub(num1,num2);
	mul(num1,num2);
	div(num1,num2);
	mod(num1,num2);
}
void add()
{
	ans= num1+num2;
	printf("ANS=%d",ans);
}
void sub()
{
	ans=num1-num2;
	printf("ANS=%d",ans);
}
void mul()
{
	ans=num1*num2;
	printf("ANS=%d",ans);
}
void div()
{
	ans=num1/num2;
	printf("ANS=%d",ans);
}
void mod()
{
	ans=num1%num2;
	printf("ANS=%d",ans);
}









