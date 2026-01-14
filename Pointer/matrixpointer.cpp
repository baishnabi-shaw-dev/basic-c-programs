#include<stdio.h>
int main()
{
	int i,j;
	int arr[2][2]={{2,3},{4,5}};
	int (*p)[2]=arr;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d ",*(*(p+i)+j));
		printf("\n");
	}	
}