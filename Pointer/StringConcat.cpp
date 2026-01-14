#include<stdio.h>
#include<string.h>
int main()
{
	char st1[20],st2[20];
	printf("Enter 1st string: ");
	scanf("%s",&st1);
	printf("Enter 2nd string: ");
	scanf("%s",&st2);
	char *s1=st1;
	char *s2=st2;
	strcat(s1,s2);
	printf("%s",st1);
}