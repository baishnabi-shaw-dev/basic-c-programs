# include<stdio.h>
int main()
{
	int m,t,s=0,n,c;
	printf("Enter a number: ");
	scanf("%d",&n);
	c=n*n;
	m=c;
        while(m!=0)
        {
            t=m%10;
            s=s+t;
            m=m/10;
        }
        if(s==n)
        printf("\n The number is Neon number");
        else
        printf("\n The number is not a Neon number");
}
