#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a String: ");
	scanf("%s",&str);
	getchar();
	char *p= str;
	for(int i=0;i<sizeof(str);i++)
	{
		if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' ||*p=='A' || *p=='E' || *p=='I' ||*p=='O' || *p=='U')
			printf("%c\n",*p);
		p++;
	}
}