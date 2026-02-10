# include<stdio.h>
int main()
{
    int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n%2==0)    
	n/=2;
	while(n%3==0)
	n/=3;
	while(n%5==0)
	n/=5;
	if(n==1)
	printf("\n The number is Ugly number");
    else
    printf("\n The number is not a Ugly number");
}
