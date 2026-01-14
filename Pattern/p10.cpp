# include<stdio.h>
int main()
{
	int i,j; 
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
	{
		printf(" ");
	}
	    int a=1;
		for(j=1;j<=i;j++)
		{
		char ch=(char)(a+64);
			printf("%c",ch);
			a++;
		}
		printf("\n");
	}
}
/*
      A
    A B
  A B C
A B C D

*/

