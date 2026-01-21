# include<stdio.h>
int main()
{
	int arr[20][20],r,c,i,j,arn[20][20];
	printf("Enter the size of row \n");
	scanf("%d",&r);
	printf("Enter the size of column ");
	scanf("%d",&c); 
	if(r>=20 || c>=20)
	{
		printf("\nInvalid row or column!");
		return 0;
	}
	printf("Enter the elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("Original matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	printf("Mirror Matrix\n");
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			arn[i][c-1-j]=arr[i][j];
		}
	}
	for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               printf("%d ",arn[i][j]);
            }
            printf("\n");
        }
	
}
