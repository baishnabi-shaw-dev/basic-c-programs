# include<stdio.h>
int main()
{
	char i,j;
	for(i='A';i<='G';i++)
	{
	for(j=i;j>='A';j--)
	printf("%c",j);
	printf("\n");
	}
}
/*
A
BA
CBA
DCBA
EDCBA
FEDCBA
GFEDCBA
*/