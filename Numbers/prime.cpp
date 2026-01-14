# include<stdio.h>
int main()
{
	int i,n,f=0;
	printf("Enter a number: ");
	scanf("%d",&n);
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			f=1;
		}
	if(f==0)
	printf("The number is prime");
	else
	printf("The number is not prime");
}
