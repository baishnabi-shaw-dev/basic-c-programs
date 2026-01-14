# include<stdio.h>
int main()
{
	int i,j,r=1,n;
	printf("Enter the length");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1)*n;j++)
		printf(" ");
		if(i%2==0)
		{
			for(j=0;j<n;j++)
		   {
			printf("%d ",r++);
		   }
	    }
	    else
	    {
	    int c=r+n-1;
	    for(j=c;j>=r;j--)
		   {
			printf("%d ",j);
		   }
		   r=r+n;	
		}
        printf("\n");
    }
}
/*
            1 2 3 4 
        8 7 6 5
    9 10 11 12
16 15  14 13
*/
