#include<stdio.h>
int main()
{
	int i,n,r,arr[100],j,temp;
	printf("Enter the length: ");
	scanf("%d",&n);
	if(n>=100)
	{
		printf("Invalid length!");
		return 0;
	}
	printf("Enter the value for array\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the position to shift: ");
	scanf("%d",&r);
	if(r>n)
	{
		printf("Invalid position");
		return 0;
	}
	printf("Input Array:\n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	for(i=0;i<r;i++)
	{
		temp=arr[n-1];
		for(j=n-1;j>0;j--)
		{
		arr[j]=arr[j-1];	
		}
		arr[0]=temp;
	}
	printf("\nAfter shifting\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
