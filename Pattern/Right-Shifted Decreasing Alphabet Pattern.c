# include<stdio.h>
int main()
{
	char i,j;
	for(i='G';i>='A';i--)
	{
	for(j='G';j>=i;j--)
	printf(" ");
	for(j='A';j<=i;j++)
	printf("%c ",j);
	printf("\n");
	}
}
/*A B C D E F G
   A B C D E F
    A B C D E
      A B C
       A B 
        A
   */
