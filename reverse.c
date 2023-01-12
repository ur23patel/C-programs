#include<stdio.h>
 main()
{
    int n, reverse = 0,rem;    
    printf("ENTER NUMBER:");    
    scanf("%d",&n);

    while (n != 0)
    {
        rem = n % 10;
        
        reverse = reverse * 10 + rem;
        
         n/=10;
    }

    printf("REVERSE NUMBER IS = %d\n", reverse);    
    
}
