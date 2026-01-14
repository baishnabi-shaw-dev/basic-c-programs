# include<stdio.h>
int main()
{
	int m,t,s=0,n,c;
	printf("Enter a number: ");
	scanf("%d",&n);
	m=n;
        while(m!=0)
        {
            t=m%10;
            s=s+t;
            m=m/10;
        }
        c=s*s*s;
        if(c==n)
        printf("\n The number is Dudency number");
        else
        printf("\n The number is not a Dudency number");
}
