# include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
			printf(" ");
			int a=1;
	    for(j=1;j<=i;j++)
	    {
	    	printf("%c",(char)(a+64));
	    	a++;
		}
	  	int b=1; 
	    for(k=1;k<=i-1;k++)
		{
	    	printf("%c",(char)(b+64));
	    	b++;
		}
	        printf("\n");
	}
}
/*
      A
    A B A
  A B C A B
A B C D A B C

*/
