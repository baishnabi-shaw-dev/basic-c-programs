#include<stdio.h>
int main()
{
	int n,i,s=0,st,m=0;
	int arr[100];
	printf("Enter the length: ");
	scanf("%d",&n);
	if(n>100)
	{
		printf("Invalid length !!");
		return 0;
	}
	printf("Enter the negative and positive: ");
	for(i=0;i<n;i++)//user input
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		arr[i]=arr[i]*arr[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);;
	}
}
	
