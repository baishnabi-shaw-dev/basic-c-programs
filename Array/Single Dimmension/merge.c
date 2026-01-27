# include<stdio.h>
int main()
{
	int i,arr[100],n1,n2,arn[100],arp[100],n3;
	printf("Enter the length of first array  ");
	scanf("%d",&n1);
	printf("Enter the elements for frist array ");
	for(i=0;i<n1;i++)
	scanf("%d",&arr[i]);
	printf("Enter the length of second array  ");
	scanf("%d",&n2);
	printf("Enter the elements for second array ");
	for(i=0;i<n2;i++)
	scanf("%d",&arn[i]);
	n3=n1+n2;
	for(i=0;i<n1;i++)
	arp[i]=arr[i];
	for(i=0;i<n2;i++)
	arp[n1+i]=arn[i];
	printf("\nThe Merge Array");
	for(i=0;i<n3;i++)
	{
	printf("%d ",arp[i]);
	}
	
}
