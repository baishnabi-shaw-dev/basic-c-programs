# include<stdio.h>
int main()
{
	char i,j,k;
	for(i='A';i<='D';i++)
	{
		for(j='A';j<='D'-i;j++)
			printf(" ");
	    for(j='A';j<=i;j++)
	  	    printf("%c",j);
	    for(k='A';k<=i-1;k++){
	    	printf("%c",k);}
	        printf("\n");
	}
}
/*
A 
A B A
A B C A B
A B C D A B C
*/
