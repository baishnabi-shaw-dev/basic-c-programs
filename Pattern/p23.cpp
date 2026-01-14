# include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		printf("*");
	    int s=2*(4-i);	
	    for(j=1;j<=s;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("*");
		printf(" \n");
	}
	for(i=3;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		printf("*");
	    int s=2*(4-i);	
	    for(j=1;j<=s;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("*");
		printf(" \n");
	}
}
/*
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/


