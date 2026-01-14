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
            s=t;
            c++;
            m=m/10;
        }
       if(c!=1)
        printf("\n The number is  Unique Number ");
        else
        printf("\n The number is not a Unique Number");
}
