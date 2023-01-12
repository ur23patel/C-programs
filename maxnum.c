#include<stdio.h>
main()
{
    int n, max = 0;
    printf("Enter value: ");
    scanf("%d", &n);
    while (n != 0)
    {
        if (max < n)
        {
            max = n;
        }
    }
    printf("Max is: %d", max);
}
