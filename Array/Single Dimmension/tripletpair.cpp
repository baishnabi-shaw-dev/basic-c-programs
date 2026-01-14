# include<stdio.h>
int main()
{
	int i,arr[100],n,x,np=0,j,k;
	printf("Enter the  length: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the sum to find the triplet: ");
	scanf("%d",&x);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if((arr[i]+arr[j]+arr[k])==x)
			    {
				np++;
				printf("\n(%d,%d,%d)", arr[i],arr[j],arr[k]);
			    }
		    }
		}
	}
		printf("\nThe number of triplet that equal to its sum: %d",np);
}
