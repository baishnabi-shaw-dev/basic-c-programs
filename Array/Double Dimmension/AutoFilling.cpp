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
	int arr[20][20];
	int n,i,j=1,r,c;
	printf("Enter length: ");
	n=input(2,20);
	for(i=0;i<n*2;i++)
	{
		if(i<n)
		{
			r=i;
			c=0;
			while(c<=i)
				arr[r--][c++]=j++;
		}
		else
		{
			r=n-1;
			c=(i-n)+1;
			while(c<=n-1)
				arr[r--][c++]=j++;
		}
	}
	printf("\nMatrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%-3d ",arr[i][j]);
		printf("\n");
	}
}//autofilling with diagonal
