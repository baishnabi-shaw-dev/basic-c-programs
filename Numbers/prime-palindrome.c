# include<stdio.h>
int main()
{
	int i,n,f=0,m,t,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			f=1;
		}
		m=n;
        while(m!=0)
        {
            t=m%10;
            s=s*10+t;
            m=m/10;
        }
	if(f==0 && s==n)
	printf("The number is prime-palindrome");
	else
	printf("The number is not prime-palindrome");
}
