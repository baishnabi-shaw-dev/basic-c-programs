# include<stdio.h>
int main()
{
	int m,t,s=0,n,c=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	if (n<10) 
    	{
        printf("The number is not a duck number");
        }
	    m=n;
        while(m!=0)
        {
            if(m%10==0)
            {
            s=1;
            }
         m/=10;
        }
        if(s==1)
        printf("\n The number is Duck number");
        else
        printf("\n The number is not a Duck number");
}
