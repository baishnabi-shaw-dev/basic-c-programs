# include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>0;i-=2)
	{
		for(j=i;j>0;j-=2)
			printf("%d ",j);
		printf("\n");
	}
}
/*
9 7 5 3 1
7 5 3 1
5 3 1
3 1
1
*/
