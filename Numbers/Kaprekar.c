#include <stdio.h>
#include <math.h>
int main() 
{
    int n,s,l,r,di,d,c=0,m;
    printf("Enter a number: ");
    scanf("%d", &n);
    s=n*n;
    m=n;
    while(n!=0)
	{
		n/=10;
		c++;
	}
    d = pow(10, c);
    r = s % d;
    l= s/d;
    if ((l + r) == m) 
	{
        printf("The number is a Kaprekar number");
    } else 
	{
        printf("The number is not a Kaprekar number");
    }

    return 0;
}

