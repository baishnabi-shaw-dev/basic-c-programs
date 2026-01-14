# include<stdio.h>
# include<math.h>
int main()
{
	int m,t,s=0,n,c=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		m/=10;
		c++;
	}
	m=n;
        while(m!=0)
        {
            t=m%10;
            s+=pow(t,c);
            m=m/10;
        }
        if(s==n)
        printf("\n The number is armstrong number");
        else
        printf("\n The number is not an armstrong number");
}
