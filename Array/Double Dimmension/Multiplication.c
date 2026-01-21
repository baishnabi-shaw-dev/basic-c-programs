#include<stdio.h>
int input(int s,int e)
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n<=e&& n>=s)
		   return n;
		printf("Invalid Input!\n");
	}
	return n;
}
int main()
{
	int arr1[20][20],arr2[20][20],r1,c1,r2,c2,arr3[40][40],k,i,j;
	printf("Enter the row length for arr1: ");
	r1=input(2,20);
	printf("Enter the column length for arr1: ");
	c1=input(2,20);
	printf("Enter the Elements for arr1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&arr1[i][j]);
	}
	printf("Enter the row length for arr2: ");
	r2=input(2,20);
	printf("Enter the column length for arr2: ");
	c2=input(2,20);
	printf("Enter the Elements for arr2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		scanf("%d",&arr2[i][j]);
	}
	printf("Actual Matrix 1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		printf("%-3d",arr1[i][j]);
		printf("\n");
    }
    	printf("\n");
    printf("Actual Matrix 2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		printf("%-3d",arr2[i][j]);
		printf("\n");
    }
    	printf("\n");
    if(c1==r2)
    {
	    for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c2;j++)
	    	{
				arr3[i][j]=0;
		    	for(k=0;k<c1;k++)
			       arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
	    	
		}
	}
	else
	{
		printf("Multiplication is not possible as c1 not equal to r2\n");
		return 0;
	}
	printf("Multiplication of Matrix 1 and Matrix 2\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		printf("%-3d ",arr3[i][j]);
		printf("\n");
    }
}