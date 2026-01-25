#include<stdio.h>
int main()
{
	int i,n,r,arr[100];
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
	printf("Enter the position to delete: ");
	scanf("%d",&r);
	if(r>=n || r<0)
	{
		printf("Invalid position!");
		return 0;
	}
	printf("Input Array:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	for(i=0;i<n-1;i++)
	{
		if(i>=r)
			arr[i]=arr[i+1];
	}
	printf("\nAfter deleting\n");
	for(i=0;i<n-1;i++)
		printf("%d ",arr[i]);
}
