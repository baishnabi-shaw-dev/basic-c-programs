# include<stdio.h>
int main()
{
	int s,n,f=0,o,c;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=n*n;
	c=n*n*n;
	o=n*n*n*n;
	while(n!=0)
	{
		if(n%10==s%10==c%10==o%10==0)
		{
		f=1;	
		}    
          n/=10;
          s/=10;  
		  c/=10;
		  o/=10;     
	}
	if(f==1)
	printf("\nThe number is Tri-automoric number");
	else
	printf("\nThe number is not a Tri-automoric number"); 
	
	
 }
	
