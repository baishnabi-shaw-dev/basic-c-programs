#include<stdio.h>
int main()
{
	int i;
	again:
	printf("Enter a number less then 10: ");
	scanf("%d",&i);
	if(i>=10)
		goto again;
	}