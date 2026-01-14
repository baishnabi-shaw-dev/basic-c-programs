# include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j || j+i==6)
			printf("%d",j);
			else
			printf("  ");
		}
		printf("\n");
	}
}
/*
  1        5
    2    4
       3 
    2     4 
  1         5
  */
