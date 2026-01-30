# include<stdio.h>
int main()
{
	int i,arr[100],n,x,np=0,j;
	printf("Enter the  length: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the sum to find the pair: ");
	scanf("%d",&x);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((arr[i]+arr[j])==x)
			{
				np++;
				printf("\n(%d,%d)", arr[i],arr[j]);
			}
		}
	}
		printf("\nThe number of pairs that equal to its sum: %d",np);
}
