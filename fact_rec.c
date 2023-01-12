#include<stdio.h>
int fact(int);
main()
{
	int i,n;
	
	printf("ENTER NUMBER :");
	scanf("%d",&n);
	
	i=fact(n);
	printf("FACTORIAL OF %d IS %d :",n,i);
}
int fact(int n)
{
	 if(n==0)
        return(1);
    return(n*fact(n-1));
}
