# include<stdio.h>
int main()
{
	int m,t,s=0,n,c=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	m=n;
        while(m!=0)
        {
            t=m%10;
            s=s+t;
            c=c*t;
            m=m/10;
        }
        if(s==c)
        printf("\n The number is spy number");
        else
        printf("\n The number is not a spy number");
}
