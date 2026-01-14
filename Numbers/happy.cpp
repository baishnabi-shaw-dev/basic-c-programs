#include<stdio.h>
int sumdigit(int n)
{
	int s,t,a=0;
	while(n!=0)
	{
		t=n%10;
		s=t*t;
		a+=s;
		n/=10;
	}
	return a;
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>9)
		n=sumdigit(n);
	if(n==1)
		printf("Its a Happy number");
	else
		printf("Its not a Happy number");
}
