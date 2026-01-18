# include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>0;i-=2)
	{
		for(j=9;j>=i;j-=2)
			printf("%d ",j);
		printf("\n");
	}
}
/*
9
9 7
9 7 5
9 7 5 3
9 7 5 3 1
*/
