#include<stdio.h>
int main()
{
	int i,n,r,c,j,k=1;
	printf("Enter a  number: ");
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++)
	{
	  if(i<n)
	  {
	  	r=i;
	  	c=0;
	  }
	  else
	  {
	  	r=n-1;
	  	c=i-n+1;
	  }
	  while(r>=0 && c<n)
	  {
	  	printf("%-3d",k);
	  	k++;
	  	r--;
	  	c++;
	  }
	  printf("\n");
}
}
/*
Enter a  number: 5
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
16 17 18 19
20 21 22
23 24
25
*/

