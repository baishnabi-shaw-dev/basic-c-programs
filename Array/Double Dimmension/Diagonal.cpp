# include<stdio.h>
int main()
{
	int arr[20][20],r,i,j;
	printf("Enter the size of row \n");
	scanf("%d",&r);
	if(r>=20)
	{
		printf("\nInvalid row or column!");
		return 0;
	}
	printf("Enter the elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	printf("The diagonal element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j || i+j==r-1)
			printf("%d ",arr[i][j]);
			else
			printf("  ");
		}
		printf("\n");
	}	
}
