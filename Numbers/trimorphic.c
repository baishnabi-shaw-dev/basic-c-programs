# include<stdio.h>
int main()
{
	int s=0,n,c;
	printf("Enter a number: ");
	scanf("%d",&n);
	c=n*n*n;
	while(n!=0)
	{
		if(n%10==c%10)
		{
		s=1;	
		}    
          n/=10;
          c/=10;       
	}
	if(s==1)
	printf("\nThe number is Trimorphic number");
	else
	printf("\nThe number is not a Trimorphic number"); 
	
	
 }
	
