#include<stdio.h>
int main()
{
	char arr[50][50];
	int r,c,fn=0,rn=0;
	printf("Enter row: ");
	scanf("%d",&r);
	printf("Enter column: ");
	scanf("%d",&c);
	if(r>50 || c>50 ||r<0 || c<0)//checking if user enter negative or more thann 50
	{
		printf("Invalid input!\n");
		printf("Please enter valid row and column");
		return 0;
	}
	while(fn!=-1)//to stop
	{
		printf("Enter floor number or enter -1 to exit: ");
		scanf("%d",&fn);
		printf("\n");
		printf("Enter room number or enter -1 to exit: ");
		scanf("%d",&rn);
		printf("\n");
		if(fn<0||rn<0||fn>r||rn>c)// floor and room cannot be less than 0 or greater than row and column
		{
			printf("Thankyou\n");
			printf("\n");
			continue;
		}
		if(fn<0 || fn>=r || rn>=c) // floor cannot be less than 0 and greater than equal row
		{
			printf("Invalid Input\n");
			printf("\n");
			continue;
		}
		char ch=arr[r-fn-1][rn];
		if(ch=='x')
			printf("Already Booked \n");
		else
		{
			arr[r-fn-1][rn]='x';
			printf("Floor number %d room number %d is now booked\n ",fn, rn);
		}
			printf("\n");
		
	}
		printf("Building view\n");
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(arr[i][j]=='x')
					printf("[x]");
				else
					printf("[ ]");
			}
			printf("\n");
		}
		return 0;
}
