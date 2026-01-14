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
int check(int arr[20][20],int r,int k,int s)
{
	int i;
	for(i=0;i<r;i++)
	{
		if(arr[i][k]>s)
			return 0;
	}
	return 1;
}
int main()
{
	int arr[20][20],r,c,i,j,k,n=0,s;
	printf("Enter row: ");
	r=input(1,20);
	printf("Enter column: ");
	c=input(1,20);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("\nMatrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%-3d ",arr[i][j]);
		printf("\n");
	}	
	for(i=0;i<r;i++)
	{
		k=0;
		for(j=1;j<c;j++)
		{
			if(arr[i][j]<arr[i][k])
			{
				s=arr[i][j];
				k=j;
			}
		}
		if(check(arr,r,k,arr[i][k])==1)
		{
			printf("\n%d is the Saddle point highest in column %d and lowest in row %d\n",arr[i][k],k,i);
			n++;
		}
	}
	if(n==0)
	printf("No Saddle Point\n");
}
