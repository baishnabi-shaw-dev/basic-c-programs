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
	int r,i,j,a[20],k=0;
	printf("Enter length: ");
	r=input(2,20);
	printf("Enter the elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		printf("%-3d",arr[i][j]);
		printf("\n");
	}
	printf("The non- boundry elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(!(i==0 || j==0 || i==r-1 || j==r-1))
			a[k++]=arr[i][j];
		}
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(!(i==0 || j==0 || i==r-1 || j==r-1))
		arr[i][j]=a[k++];
		}
	}
	printf("Sorted Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		printf("%-3d",arr[i][j]);
		printf("\n");
	}
}	

