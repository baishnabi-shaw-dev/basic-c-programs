#include<stdio.h>
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
	int arr[20][20],r,c,i,j,num[20][20],a;
	printf("Enter row: ");
	r=input(2,20);
	printf("Enter column: ");
	c=input(2,20);
	printf("Enter the elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("Actual matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%-3d",arr[i][j]);
		printf("\n");
    }
	printf("Enter the nth times to rotate: ");
    scanf("%d",&a);
    while (a--) 
	{
        for (i=0;i<r;i++) 
		{
            for (j=0;j<c;j++) 
            {
            num[j][r-1-i]=arr[i][j];  // Rotate right
			}
        }
        int temp=r;
        r=c;
        c=temp;
        for (i=0;i<r;i++) 
		{
            for (j=0;j<c;j++) 
			{
                arr[i][j]=num[i][j];
            }
        }
    }
    printf("Rotate 90 degree right\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		printf("%-3d",num[i][j]);
		printf("\n");
    }
}
