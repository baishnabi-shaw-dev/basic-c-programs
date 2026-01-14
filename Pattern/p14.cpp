# include<stdio.h>
int main()
{
	char i,j;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j+=2)
			printf("%c ",j);
		printf("\n");
	}
}
/*
A
A 
A C
A C
A C E
*/
