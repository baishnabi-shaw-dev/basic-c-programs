# include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>0;i-=2)
	{
		for(j=1;j<=i;j+=2)
			printf("%d ",j);
		printf("\n");
	}
}
