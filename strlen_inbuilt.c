#include<stdio.h>
#include<string.h>
main()
{
	char s[50];
	int i,length;
	
	printf("ENTER STRING : ");
	scanf("%s",&s);
	
	
   for(i=1; s[i]!='\0'; i++)
    {
        length++; 
    }
    
    printf("\nLength of input string: %d",length);
    
 
}
