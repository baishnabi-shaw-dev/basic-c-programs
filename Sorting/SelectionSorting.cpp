# include<stdio.h>
int main()
{
	int i,j,n,temp,min;
	int arr[100];
	printf("Enter the length :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		 min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		        temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}   
}
