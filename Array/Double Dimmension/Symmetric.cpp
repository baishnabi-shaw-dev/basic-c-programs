#include<stdio.h>
int main()
{
	int arr[20][20],r,c,i,j,s=0;
	printf("Enter the size of row \n");
	scanf("%d",&r);
	printf("Enter the size of column ");
	scanf("%d",&c);
	if(r>=20 || c>=20)
	{
		printf("\nInvalid row or column!");
		return 0;
	}
	printf("Enter the elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("Original Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	printf("Transpose Matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		printf("%d ",arr[j][i]);
		if(arr[i][j]!=arr[j][i])
		s++;
		}
		printf("\n");	
	}
	if(s==0)
	printf("The Matrix is symmetric");
	else
	printf("The Matrix is not symmetric");	
}
