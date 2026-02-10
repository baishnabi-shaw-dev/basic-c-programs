#include <stdio.h>
int main()
 {
    int n,s,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    s=(i * (i + 1)) / 2;
    while(1)
    {
	
    if(s==n)
       {
    	 printf("It is a Triad number");
    	 break;
       }
    if(s>n)
      {
    	 printf("It is not a Triad number");
    	 break;
      }  
    i++; 
    }
}

