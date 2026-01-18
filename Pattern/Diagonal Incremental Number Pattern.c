#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the length :");
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{   
		if(i<=2)
			printf("  ");
	    int val=i;
	    int gap=n;
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d ",val);
			val+=gap;
			gap--;
		}	
	
		printf("\n");
	}
}
/*
  1 7 12 16 19 21
  2 8 13 17 20
3 9 14 18
4 10 15
5 11
6
*/
