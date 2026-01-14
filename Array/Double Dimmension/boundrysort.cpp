#include<stdio.h>
int input(int s,int e)
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n<=e && n>=s)
            return n;
        printf("Invalid input!\n");
    }
    return n;
}
int main()
{
	int arr[20][20];
	int n,i,j,b[100],k=0;
	printf("Enter length: ");
	n=input(2,20);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("Matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%-3d",arr[i][j]);
		printf("\n");
	}
	for(j=0;j<n;j++)//top
	b[k++]=arr[0][j];
	for(i=1;i<n-1;i++)//right
	b[k++]=arr[i][n-1];
	for(j=n-1;j>=0;j--)//bottomm
	b[k++]=arr[n-1][j];
	for(i=n-2;i>0;i--)//left
	b[k++]=arr[i][0];

	for(i=0;i<k-1;i++)//sorting
	{
		for(j=i+1;j<k;j++)
		{
			if(b[i]>b[j])
			{
				int temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	k=0;
	for(j=0;j<n;j++)//top
	arr[0][j]=b[k++];
	for(i=1;i<n-1;i++)//right
	arr[i][n-1]=b[k++];
	for(j=n-1;j>=0;j--)//bottomm
	arr[n-1][j]=b[k++];
	for(i=n-2;i>0;i--)//left
	arr[i][0]=b[k++];
	printf("Sorted Matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%-3d ",arr[i][j]);
		printf("\n");
	}
}
	
