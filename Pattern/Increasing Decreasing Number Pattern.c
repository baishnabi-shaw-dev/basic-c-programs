# include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d ",j);
		printf("\n");
	}
	for(i=6;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		printf("%d ",j);
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
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
*/
