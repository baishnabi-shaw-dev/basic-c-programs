#include<stdio.h>
int main()
{
	int arr[20][20],n=0,c=-1,i,j;
	while(n<1||n>20)
	{
		printf("Enter length in the range 1-20: ");
		scanf("%d",&n);
		if(n<1||n>20)
		printf("Invalid Input!\n");
	}
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
		printf("%3d ",arr[i][j]);
		printf("\n");
	}
	printf("\n");
	while(c!=0)
	{
		while(c<0&&c<5)
		{
			printf("1 UH RD\n2 LH LD\n3 UH LD\n4 LH RD\nAnd 0 to terminate\n");
			scanf("%d",&c);
			if(c<0&&c<5)
				printf("Invalid Input\n");
		}
	printf("\n");
	switch(c)
	{
		case 1:
			printf("UH-RD\n");
			for(i=0;i<n;i++)
		        {
			    for(j=0;j<n;j++)
			        {
					if(i+j<n-1)
					printf("%3d ",arr[i][j]);
					else
					printf(" ");
					}
				printf("\n");
				}
		break;
		printf("\n");
		case 2:
			printf("LH-RD\n");
		    for(i=0;i<n;i++)
				{
				for(j=0;j<n;j++)
					{
					if(i+j>n-1)
					printf("%3d",arr[i][j]);
					else
					printf("   ");
					}
			printf("\n");
				}
		break;
		printf("\n");
		case 3:
			printf("UH-LD\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{	    
				if(!(i==j)&&(i<=j))
			    printf("%3d",arr[i][j]);
				else
				printf("   ");
				}
			printf("\n");
			}
		break;
		printf("\n");
		case 4:
		    printf("LH-LD\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
							
				if(!(i==j)&&(i>=j))
				printf("%3d ",arr[i][j]);
				else
				printf(" ");
				}
			printf("\n");
			}
		break;
		printf("\n");
		default:
		printf("Program Terminated\n");			        
	}
	if(c!=0)
	c=-1;
	}
}
