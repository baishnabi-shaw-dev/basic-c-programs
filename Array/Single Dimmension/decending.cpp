#include<stdio.h>
int main()
{
	int n,i,k;
	int arr[100];
	printf("Enter the length: ");
	scanf("%d",&n);
	if(n>100)
	{
		printf("Invalid length !!");
		return 0;
	}
	printf("Enter a number: ");
	for(i=0;i<n;i++)//user input
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)//sorting
	{
		for(k=0;k<n-1-i;k++)
		{
			if(arr[k]<arr[k+1])
			{
				int temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
