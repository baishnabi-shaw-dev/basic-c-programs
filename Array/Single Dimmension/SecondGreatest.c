#include<stdio.h>
int main()
{
	int i,n,r=0,max=0,arr[100];
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
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[max])
		{
			r=arr[max];
			max=i;
		}
	} 
	if(max==0)
	r=1;	
	else
	r=0;
		
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[r] && max!=i)
		r=i;
	}
	printf("The second highest %d\n",arr[r]);
	
}
