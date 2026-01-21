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
	int arr[20][20],n;
	printf("Enter length: ");
	n=input(2,20);
	int i,j,t=0,l=0,b=n-1,r=n-1,val=1;
	while(t<=b && l<=r) 
	{
        for(i=l;i<=r;i++)
            arr[i][t]=val++;
            t++;
        for(i=t;i<=b;i++)
            arr[r][i] = val++;
            r--;
        if(t<=b) 
		{
            for(i=r;i>=l;i--)
            arr[i][b] = val++;
            b--;
        }
        if (l<=r)
		{
            for(i=b;i>=t;i--)
            arr[l][i] = val++;
            l++;
        }
    }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%-4d",arr[i][j]);
		printf("\n");
	}
}
