# include<stdio.h>
int main()
{
	int i,n,f=0,m,g=0,j,t;
	printf("Enter two numbers: ");
	scanf("%d,%d",&n,&m);
		
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			f=1;
		}
		for(j=2;j<=m/2;j++)
		{
			if(m%j==0)
			g=1;
		}
	t=m-n;
	if(f==0 && g==0 || t==2 )
	printf("The number is Twin-prime number");
	else
	printf("The number is not Twin-prime number");
}
