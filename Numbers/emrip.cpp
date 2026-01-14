# include<stdio.h>
int main()
{
	int i,n,f=1,m,t,s=0,j,c=1,a;
	printf("Enter a number: ");
	scanf("%d",&n);
	m=n;
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
			f=0;
			break;
	    	}
		}
        t=n;
        s=0;
    while (t!=0) 
	{
        s=s*10+(t%10);  
        t/=10; 
    }
	for(i=2;i*i<=s;i++)
		{
			if(s%i==0)
			f=0;
		}
	if(f==1 && m!=0)
	printf("The number is Emirp number");
	else
	printf("The number is Emirp number");



}
