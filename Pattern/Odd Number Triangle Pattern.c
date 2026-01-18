# include<stdio.h>
int main()
{
	int i,j,r=1;
	for(i=1;i<=7;i+=2)
	{
		for(j=1;j<=i;j+=2)
		
		{
			printf(" %d ",r);
			r+=2;
		}
		printf("\n");
	}
}
/*
1
3 5
7 9 11
13 15 17 19
*/
