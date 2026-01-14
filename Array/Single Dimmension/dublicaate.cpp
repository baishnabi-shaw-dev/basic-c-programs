# include<stdio.h>
int main()
{
	int i,arr[100],n,j;
	printf("Enter the length :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\nThe duplicate elements in the array");
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
		if(arr[j]==arr[i])
		printf("\n%d",arr[i]);	
		}
		
	}
}
