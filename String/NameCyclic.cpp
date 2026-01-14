#include<stdio.h>
#include<string.h>
int main()
{
	int i,k,j,l; char nm[20];
	do{
		printf("Enter a name: ");
		scanf("%s",&nm);
		l=strlen(nm);
		if(l<=1)
			printf("Not possible");
	}while(l<=1);
	for(i=0;i<l;i++)
	{
		k=i;
		for(j=0;j<l;j++)
		{
			if(k==l)
				k=0;
			printf("%c ",nm[k++]);
		}
		printf("\n");
	}
	for(i=0;i<l;i++)
		printf("%c ",nm[i]);
	printf("\n%d times",l+1);
}