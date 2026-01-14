#include<stdio.h>
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n,i,arr[100],r=2;
	printf("Enter the length: ");
	scanf("%d",&n);
	if(n>100)
	{
		printf("Invalid length!");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		while(prime(r)!=1)
			r++;
		arr[i]=r++;
		printf("%d ",arr[i]);
	}
}
