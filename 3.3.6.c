#include<stdio.h>
main()
{
	int i,j,a[2][2],b[2][2];
	int sum_res[2][2];
	int sub_res[2][2];
	int mul_res[2][2];
// enter first matrix	
	printf("ENTER THE ELEMNTS OF THE FIRST MATRIX ::\n\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("ENTER A %d %d :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	// enter second matrix
	printf("ENTER THE ELEMNTS OF THE SECOND MATRIX ::\n\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("ENTER B %d %d :",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	// sorting result
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum_res[i][j] = a[i][j] + b[i][j];
			sub_res[i][j] = a[i][j] - b[i][j];
			mul_res[i][j] = a[i][j] * b[i][j];
		}
	}
	
	//display
	
	printf("FINAL RESULT IS:\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("SUM OF %d + %d = %d\t",a[i][j],b[i][j],sum_res[i][j]);
			printf("SUB OF %d - %d = %d\t",a[i][j],b[i][j],sub_res[i][j]);
			printf("MUL OF %d * %d = %d\t",a[i][j],b[i][j],mul_res[i][j]);
			
			if(j==1)
				printf("\n");
		}
	}
}
