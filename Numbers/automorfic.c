# include<stdio.h>
int main()
{
	int s,n,c=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=n*n;
	while(n!=0)
	{
		if(n%10==s%10)
		{
		c=1;	
		}    
          n/=10;
          s/=10;       
	}
	if(c==1)
	printf("\nThe number is automorphic number");
	else
	printf("\nThe number is not a automorphic number"); 
	
	
 }
	
