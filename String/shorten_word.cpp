#include<stdio.h>
#include<string.h>
int main()
{
	char c[100],word[300];
	int n,i=0,j=0,k;
	printf("Enter a sentence: \n");
	fgets(c,sizeof(c),stdin);
	c[strcspn(c, "\n")] = '\0';
	printf("Enter a number: ");
	scanf("%d",&n);
	while(1)
	{
		if(c[i]==' ' || c[i]=='\0')
		{
			word[j]='\0';	
			for(k=0;k<n;k++)
			{
				if(k<j)
					printf("%c",word[k]);
				else
					printf("*");
			}
			if (c[i] == '\0') 
			break; 
            printf(" ");
            j=0; 
		}
		else
		{
			word[j++]=c[i];
		}
 	 i++;
    }
        printf("\n");
}