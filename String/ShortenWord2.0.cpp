#include<stdio.h>
#include<string.h>
int main()
{
	int i,min,max;	char sent[100],arr[100];
	printf("Enter a sentence: ");
	fgets(sent,sizeof(sent),stdin);
	sent[strcspn(sent, "\n")] = '\0';
	sent+=" ";
}