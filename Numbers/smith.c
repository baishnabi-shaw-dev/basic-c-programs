#include<stdio.h>
int sumdigit(int n)
{
	int s=0;
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
	}
	return s;
}
int main()
{
	int i,sd,sf=0,num,t;
	printf("Enter a number: ");
	scanf("%d",&num);
	sd=sumdigit(num);

	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			sf=sf+sumdigit(i);
			num=num/i;
			i=1;
		}
	}
	
	if(sf==sd)
		printf("It's a smith number");
	else
		printf("Its' not a smith number");
return 0;
}
