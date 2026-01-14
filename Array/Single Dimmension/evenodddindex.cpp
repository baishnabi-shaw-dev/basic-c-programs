# include<stdio.h>
int main()
{
	int i,arr[100],n,so=0,se=0,d;
	printf("Enter the length :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			se+=arr[i];
		}
		else
		so+=arr[i];
	}
	if(se<so)
	d=so-se;
	else
	d=se-so;
	printf("\nThe difference is:%d ",d );
}
// 6.	Find the difference between the sum of elements at even and odd index
