# include<stdio.h>
int main()
{
	int i,arr[100],n,arn[100];
	printf("Enter the length ");
	scanf("%d",&n);
	printf("Enter the elements ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\nThe Reverse Array\n");
	for(i=n-1;i>=0;i--)
	{
	  printf("%d ",arr[i]);
    }
}
