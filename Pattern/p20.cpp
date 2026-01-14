# include<stdio.h>
int main()
{
	char i,j;
	for(i='A';i<='G';i+=2)
	{
		for(j='G';j>=i;j-=2)
		   printf(" ");
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
/*
      A
    A B C
  A B C D E
A B C D E F G
*/
