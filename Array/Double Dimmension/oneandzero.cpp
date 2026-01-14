#include<stdio.h>
int input(int s, int e)
{
	int n=0;
	while(1)
	{
		scanf("%d",&n);
		if(n<=e&&n>=s)
			return n;
		printf("Invalid input!\n");
	}
}
void display(int arr[20][20], int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%-3d",arr[i][j]);
		printf("\n");
	}
}
int main()
{
	int arr[20][20],arn[400],r,c,i,j,k,n=0,s;
	printf("Enter row: ");
	r=input(1,20);
	printf("Enter column: ");
	c=input(1,20);
	printf("Enter boolean element only (0 or 1)\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			arr[i][j]=input(0,1);
	}
	printf("Input\n");
	display(arr,r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]==1)
			{
				arn[n++]=i;
				arn[n++]=j;
			}
		}
	}
	for(i=0;i<n;i+=2)
	{
		for(k=0;k<c;k++)
			arr[arn[i]][k]=1;
		for(k=0;k<r;k++)
			arr[k][arn[i+1]]=1;
	}
	printf("After Convertion\n");
	display(arr,r,c);
}
