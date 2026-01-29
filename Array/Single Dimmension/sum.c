# include<stdio.h>
int main()
{
	int i,arr[100],n,j,s,t=0,p=1;
	printf("Enter the  length: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s=arr[i]+arr[j];
			printf("\nThe sum of(%d,%d) = %d\n",arr[i],arr[j],s);
			if((arr[t]+arr[p])>s && j!=i)
	        {
	         t=i;
	         p=j;
			}
		}
    }
	printf("\n The smallest pair sum %d and %d ",arr[t],arr[p]);

}

