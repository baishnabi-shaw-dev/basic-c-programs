# include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		int a=1;
		for(j=1;j<=i;j++)
		{
			int d=a+64;
			if(i%2==0)
			{
				char ch=(char)(d);
				printf("%c",ch);
				a++;
			}
			else
			printf("%d",j);
		}
		printf("\n");
	}
}
/*
1
A B
1 2 3
A B C D
1 2 3 4 5
*/
