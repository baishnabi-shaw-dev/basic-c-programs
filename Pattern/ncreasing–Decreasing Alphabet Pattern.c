# include<stdio.h>
int main()
{
	char i,j;
	for(i='A';i<='G';i++)
	{
		for(j='A';j<=i;j++)
		printf("%c ",j);
		printf("\n");
	}
	for(i='F';i>='A';i--)
	{
		for(j='A';j<=i;j++)
		printf("%c ",j);
		printf("\n");
	}
}
/*
A
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G
A B C D E F
A B C D E
A B C D
A B C
A B
A
*/
