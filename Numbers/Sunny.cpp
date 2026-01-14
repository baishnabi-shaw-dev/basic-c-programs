# include<stdio.h>
# include<math.h>
int main()
{
	int n,a,s,e;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=n+1;
	s=sqrt(a);
    e=s*s;
    if(a==e)
    printf("\n The number is Sunny number");
        else
        printf("\n The number is not a Sunny number");
}
	
