#include <stdio.h>
int main()
 {
    int n, s = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (s*(s+1)<n) 
	{
        s++;
    }
    if (s*(s+1)==n) 
        printf("It is a pronic number");
    else 
        printf("It is not a pronic number");
}

