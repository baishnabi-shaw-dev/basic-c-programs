# include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
	  for(j=4-i;j>=1;j--)
	  	printf("  ");
	  int a=1;
     for(j=1;j<=2*i-1;j++)
	   {
		printf(" %c",(a+64));
		a++;            
       }
       printf(" \n");
	}
}
/*
      A
    A B C
  A B C D E
A B C D E F G
 
 */
