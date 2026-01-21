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
void display(int arr[20][20],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%-3d",arr[i][j])
		printf("\n");
	}
}
int main()
{
	int arr[20][20];
	int n,i,j=1,r,c;
	printf("Enter row: ");
	r=input(1,20);
	printf("Enter column: ");
	c=input(1,20);
	printf("Enter array elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("Original Matrix\n");
	display(arr,r,c);
	if(r>1)
  {
	for(i=0;i<r/2;i++)
	{
		for(j=0;j<c;j++)
		{
			int num=arr[i][j];
			arr[i][j]=arr[r-i-1][j];
			arr[r-i-1][j]=num;
		}
	}
	    printf("After Flip\n");
	    display(arr,r,c);	
   }
   else
   printf("Single array cannot flip");
}
