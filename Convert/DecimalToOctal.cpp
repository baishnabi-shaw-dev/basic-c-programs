#include<stdio.h>
int main()
{
	int arr[10];
	int n,j,i=0,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d==>",n);
	while(n!=0)
	{
		arr[i]=n%8;
		n/=8;
		i++;
	}
	n=i;
    for(i=0;i<n;i++)  
    {
      s=arr[i]+s; 	
	}
	for(j=i-1;j>=0;j--)
		printf("%d",arr[j]);
}
