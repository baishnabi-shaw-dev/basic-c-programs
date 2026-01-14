# include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7-i;j++)
		{
		printf(" ");
	    }
		for(j=1;j<=i;j++)
		{
	if(i==7||j==1||j==i)
		{
		printf("%d ",j);
	    }
		else
		printf(" ");
		}
		printf("\n");
	}
}
/*
            1
           1 2
          1 2 3
         1 2 3 4
        1 2 3 4 5
       1 2 3 4 5 6
      1 2 3 4 5 6 7
*/
