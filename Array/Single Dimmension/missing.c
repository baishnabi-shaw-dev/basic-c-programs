#include<stdio.h>
int main()
{
	int n,i,s=0,st,m=0;
	int arr[100];
	printf("Enter the length: ");
	scanf("%d",&n);
	if(n>100)
	{
		printf("Invalid length !!");
		return 0;
	}
	printf("Enter n distinct numbers from 1 to n + 1: ");
	for(i=0;i<n;i++)//user input
	{
		scanf("%d",&arr[i]);
	}
    st=((n+1)*(n+2))/2;
    for(i=0;i<n;i++)
    {
    	s+=arr[i];
    }
    m=st-s;
    printf("The Missing Number: %d",m);
}
