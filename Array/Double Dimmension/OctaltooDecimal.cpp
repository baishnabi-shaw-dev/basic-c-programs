#include<stdio.h>
#include<math.h>
int input(int s,int e)
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n<=e && n>=s)
            return n;
        printf("Invalid input!\n");
    }
    return n;
}
int main()
{
	int arr[20][20];
	int r,c,i,j;
	printf("Enter row(2-20): ");
	r=input(1,20);
	printf("Enter column(2-20): ");
	c=input(1,20);
	printf("Enter octal value: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			arr[i][j]=input(0,7);	
	}
	printf("Input Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%-3d",arr[i][j]);
			printf("\n");
	}
	printf("Octal to Decimal\n");
	for(i=0;i<r;i++)
	{
		int num=0;
		for(j=0;j<c;j++)
		{
			int temp=arr[i][j]*pow(8,c-j-1);
			printf("%d ",arr[i][j]);
			num+=temp;
		}
		printf("\t:%d\n",num);
	}
}
