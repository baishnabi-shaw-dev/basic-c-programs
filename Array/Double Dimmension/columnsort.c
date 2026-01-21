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
	int r,c,i,j,a[20],k=0;
	printf("Enter row: ");
	r=input(2,20);
	printf("Enter cloumn: ");
	c=input(2,20);
	printf("Enter the elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%-3d",arr[i][j]);
		printf("\n");
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		a[k++]=arr[j][i];
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
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		arr[j][i]=a[k++];
	}
	printf("Sorted Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%-3d",arr[i][j]);
		printf("\n");
	}
}
