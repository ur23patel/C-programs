#include<stdio.h>
 main()
{
    int i,j,k=1,n;

    printf("Enter numbers:");
    scanf("%d",&n);

   
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%4c",(char)(k+64));   
        }
        printf("\n");
    }
}
