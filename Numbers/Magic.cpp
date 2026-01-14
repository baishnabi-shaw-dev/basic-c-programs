#include<stdio.h>
int sumdigit(int n)
{
	int s=0;
	while(n!=0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>9)
		n=sumdigit(n);
	if(n==9)
		printf("Its a Magic number");
	else
		printf("Its not a Magic number");
}
