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
	printf("Input Array:\n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	for(i=0;i<n/2;i++)
	{
		int num=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=num;
	}
	printf("\nAfter Reversing\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
