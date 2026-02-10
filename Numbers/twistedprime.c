# include<stdio.h>
int main()
{
	int m,t,s=0,n,c=0,j,i,f=0;
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
    
         for(i=2;i<=s/2;i++)
		{
			if(s%i==0)
			c=1;
	    }  
        if(c==0 && f==0)
        printf("\n The number is twisted-prime number");
        else
        printf("\n The number is not a twisted-prime number");

}
