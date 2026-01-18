# include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
			printf(" ");
	    for(j=1;j<=i;j++)
	  	    printf("%d",j);
	    for(k=1;k<=i-1;k++){
	    	printf("%d",k);}
	        printf("\n");
	}
}
/*
      1
    1 2 1
  1 2 3 1 2
1 2 3 4 1 2 3

*/

