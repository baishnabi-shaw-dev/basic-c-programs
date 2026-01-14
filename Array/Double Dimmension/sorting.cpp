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
	int n,i,j,a[20],k=0;
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		a[k++]=arr[i][j];
	}
	for(i=0;i<k-1;i++)//sorting
	{
		for(j=0;j<k-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		arr[i][j]=a[k++];
	}
	printf("Sorted Matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%-3d",arr[i][j]);
		printf("\n");
	}
}
