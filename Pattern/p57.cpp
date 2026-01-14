# include<stdio.h>
int main()
{
	int i,j,n,o=1,e=2;
	printf("Enter thh length :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        for(j=i;j<n;j++)
		printf("   ");
		for(j=1;j<=i;j++)
		{
			if(i%2==1)
			{
				printf("%d",o);
				o+=2;
				if(o<10)
				printf("  ");
				else
				printf(" ");
			}
			else
			{
				printf("%d",e);
				e+=2;
				if(e<10)
				printf("  ");
				else
				printf(" ");
				
			}	
		}
		printf("\n");
	}
}
/*
                  1
                2 4
              3 5 7
          6 8 10 12
      9 11 13 15 17
  14 16 18 20 22 24
  */
