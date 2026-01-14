# include<stdio.h>
int main()
{
	int n,arr[100],i,k,c;
	printf("Enter the length: ");
	scanf("%d",&n);
	if(n>100)
	{
		printf("Invalid Length!");
		return 0;
	}
	printf("Enter numbers: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		c=0;
		for(k=0;k<i;k++)
		{
			if(arr[k]==arr[i])
			{
				c=-1; 
				break;
			}
		}
		if(c==0)
		{
			for(k=i;k<n;k++)
			{
				if(arr[i]==arr[k])
					c++;
			}
			printf("\nNumber: %d Frequency %d",arr[i],c);
		}
	}
}

