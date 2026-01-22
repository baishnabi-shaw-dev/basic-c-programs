# include<stdio.h>
int main()
{
	int arr[20][20],r,c,i,j,s;
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
	printf("matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		s=0;
		for(j=0;j<c;j++)
			s+=arr[i][j];
		printf("\nSum of %d row is %d",(i+1),s);
	}
	for(i=0;i<c;i++)
	{
		s=0;
		for(j=0;j<r;j++)
			s+=arr[j][i];
		printf("\nSum of %d column is %d",(i+1),s);
	}
}
