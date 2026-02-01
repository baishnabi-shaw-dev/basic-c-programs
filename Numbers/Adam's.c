# include<stdio.h>
int main()
{
	int s=0,n,c=0,a,m,t,r,o,e;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=n*n;//squaring the number
	m=a;
	o=n;
        while(m!=0)//reversing the square  number
          {
            t=m%10;
            s=s*10+t;
            m=m/10;
          }
        while(o!=0)//reversing the original number
          {
            r=o%10;
            c=c*10+r;
            o=o/10;
          }
        e=c*c;//squaring the reversed original number 
	    if(s==e)//comparing the  square reversed and reversed square
	    printf("\nThe number is adam's number");
    	else
    	printf("\nThe number is not a adam's number"); 
	
	
 }
	
