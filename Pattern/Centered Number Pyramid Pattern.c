# include<stdio.h>
int main()
{
	int i,j; 
	for(i=1;i<=4;i++)
	{
		for(j=4-i;j>=1;j--)
	    {
		printf(" ");
	    }
		for(j=1;j<=2*i-1;j++)
		 {
	       printf("%d",j);
		 }
		printf("\n");
	}
}

/*
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7

*/
