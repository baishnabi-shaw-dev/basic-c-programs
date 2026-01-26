#include<stdio.h>
int main()
{
	int i,j,k,s,c=1,arr[10][10],result[10][10];
	do{
		printf("Enter size of the square matrix: ");
		scanf("%d",&s);
		if(s<2)
			printf("Invalid input\n");
	}while(s<2);
	//input
	printf("Enter a number of Matrix: ");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Input Matrix\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
			printf("%-5d",arr[i][j]);
		printf("\n");
	}
	printf("Multiplied by itself\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			result[i][j]=0;
			for(k=0;k<s;k++)
				result[i][j]+=arr[i][k]*arr[k][j];
			printf("%-5d",result[i][j]);
			if(result[i][j]!=arr[i][j])
				c=0;
		}
		printf("\n");
	}
	if(c)
		printf("Its a idempotent Matrix");
	else
		printf("Its not a idempotent Matrix");
}