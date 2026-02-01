#include<stdio.h>
int main()
{
	int arr[10];
	char hexa[100];
	int n,j,i=0,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d==>",n);
	while(n!=0)
	{
		arr[i]=n%16;
		if(arr[i]<10)
		{
			hexa[i]=arr[i]+48;
			i++;
		}
		else
		{
			hexa[i]=arr[i]+55;
			i++;
		}
		n/=16;
	}
	for(j=i-1;j>=0;j--)
		printf("%c",hexa[j]);
}
