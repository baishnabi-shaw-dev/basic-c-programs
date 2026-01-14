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

