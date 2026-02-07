# include<stdio.h>
int main()
{
	int n,i,s=0,m;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==n)
		{
			break;
		}
		else
		{
		  if(n%i==0)
		  {
			s=s+i;	
		  }
    	}
	}
	if(s==n)
        printf("\n The number is Perfect number");
        else
        printf("\n The number is not a Perfect number");

}
