# include<stdio.h>
int main()
{
	int arr[100],arn[100],i,j,n,k;
	printf("Enter the length");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	}
	int p=n/2;
	for(i=0;i<p-1;i++)
	{
		for(k=0;k<p-1-i;k++)
		{
			if(arr[k]>arr[k+1])
			{
				int temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}	
		}		
	}
	    for(i=0;i<p;i++)
		printf(" %d ",arr[i]);
	for(i=p;i<n;i++)
	{
		for(k=p;k<n;k++)
		{
			if(arr[k]>arr[k+1])
			{
				int temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}	
		}		
	}
	    for(i=p;i<n;i++)
		printf("%d ",arr[i]);		
		
}
