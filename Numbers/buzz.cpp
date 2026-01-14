# include<stdio.h>
int main()
{
	int i,n,f=0,m,s=0,t;
	printf("Enter a number: ");
	scanf("%d",&n);
	m=n;
        while(m!=0)
        {
            t=m%10;
            s=t;
            m=m/10;
        }
        if(s==7 || n%7==0)
        printf("\n The number is Buzz number");
        else
        printf("\n The number is not a Buzz number");
}
