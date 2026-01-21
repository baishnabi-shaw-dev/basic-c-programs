#include<stdio.h>
int main()
{
	int arr[20][20],n,c=-1,i,j;
	do
	{
	printf("Enter length in the range 1-20: ");
	scanf("%d",&n);
	}while(n<1||n>20);
	printf("Enter array value\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("Matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%3d",arr[i][j]);
		printf("\n");
	}
	printf("\n");
	while(c!=0)
	{
	printf("1 UH RD\n2 LH LD\n3 UH LD\n4 LH RD\nAnd 0 to terminate\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("UH-RD\n");
			for(i=0;i<n;i++)
		    {
			for(j=0;j<n;j++)
			printf(i+j<n-1 ? "%3d": "  ", arr[i][j]);
			printf("\n");
			}
		break;
		case 2:
			printf("LH-RD\n");
		    for(i=0;i<n;i++)
			{
			for(j=0;j<n;j++)
			printf(i+j>n-1 ? "%3d": "   ", arr[i][j]);
			printf("\n");
			}
		break;
		case 3:
			printf("UH-LD\n");
			for(i=0;i<n;i++)
			{
			for(j=0;j<n;j++)
			printf(i<j ? "%3d": "   ", arr[i][j]);
			printf("\n");
			}
		break;
		case 4:
		    printf("LH-LD\n");
			for(i=0;i<n;i++)
			{
			for(j=0;j<n;j++)
			printf(i>j ? "%3d": "   ", arr[i][j]);
			printf("\n");
			}
		break;
		case 0:
		printf("Program Terminated\n");		
		break;
		default:
		printf("Invalid choice \n");			        
	}
	}
	return 0;
}

