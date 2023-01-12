#include<stdio.h>
void reverseString();
main()
{
	
	printf("Enter the String:");
	reverseString(); // called a function

}
reverseString()  //Function for Reverse of string
{
	char c;
	scanf("%c",&c);
	
	if(c!='\n')
	{
		reverseString(); //calle a function until get the null character
		printf("%c",c);
	}
	
}
