# include<stdio.h>
int main()
{
	int i,arr[100],n;
	printf("Enter the length :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=n;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	for(i=n;i>0;i--)
	printf("%d ", arr[i]);
}
