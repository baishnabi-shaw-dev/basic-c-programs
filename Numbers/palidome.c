# include<stdio.h>
int main()
{
	int m,t,s=0,n,c=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	m=n;
        while(m!=0)
        {
            t=m%10;
            s=s*10+t;
            m=m/10;
        }
        if(s==n)
        printf("\n The number is palindrome number");
        else
        printf("\n The number is not a palindrome number");
}
