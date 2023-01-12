#include <stdio.h>
 main()
{
    int num, sum=0;

    printf("Enter value: ");
    scanf("%d", &num);
  
    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

}
