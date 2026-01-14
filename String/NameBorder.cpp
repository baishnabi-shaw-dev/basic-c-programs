#include<stdio.h>
#include<string.h>
int main()
{
	int i,k,l; char nm[20];
	do{
		printf("Enter a name: ");
		scanf("%s",nm);
		l=strlen(nm);
		if(l<=1)
			printf("Pattern not possible!\n");
	}while(l<=1);
	printf("Output \n");
	for(i=0;i<l;i++)
		printf("%c ",nm[i]);
	printf("\n");
	for(i=1;i<l-1;i++)
	{
		printf("%c ",nm[i]);
		for(k=1;k<l-1;k++)
			printf("  ");
		printf("%c \n",nm[l-i-1]);
	}
	for(i=l-1;i>=0;i--)
		printf("%c ",nm[i]);
}