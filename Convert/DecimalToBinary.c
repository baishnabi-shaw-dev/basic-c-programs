#include<stdio.h>
int main()
{
	int arr[10];
	int n,j,i=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d==>",n);
	while(n!=0)
	{
		arr[i++]=n%2;
		n/=2;
	}
	for(j=i-1;j>=0;j--)
		printf("%d",arr[j]);
}
