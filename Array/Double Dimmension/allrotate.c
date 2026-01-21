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
	int arr[20][20],r,c,i,j,num[20][20],f=-1,a;
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
    	printf("\n");
	while(f!=0)
	{
		while(f<0&&f<4)
		{ 
			printf("1 rotate 90 left \n2 rotate 90 right \n3 rotate 180\nAnd 0 to terminate\n");
			scanf("%d",&f);
			if(f<0&&f<4)
			printf("Invalid Input\n");
		}
	printf("\n");
	switch(f)
	{
		case 1:
		printf("Enter the nth times to rotate: ");
	    scanf("%d",&a);
	    while (a--)
		{
	        for (i=0; i<r;i++) 
			{
	            for (j=0;j<c;j++)
	            num[c-j-1][i]=arr[i][j]; // Rotate left
	        }
	        int temp=r;
	        r=c;
	        c=temp;
	        for (i=0;i<r;i++) 
			{
	            for (j=0;j<c;j++) 
	            arr[i][j]=num[i][j];
	        }
	    }
	    printf("Rotate 90 degree left\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			printf("%-3d",num[i][j]);
			printf("\n");
	    }
	    break;	
		case 2:
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
	        int temp=r;//ugf
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
		break;
		case 3:
		printf("Enter the nth times to rotate: ");
	    scanf("%d",&a);
	    while (a--)
		{
	        for (i=0; i<r;i++) 
			{
	            for (j=0;j<c;j++)
				num[r-1-i][c-1-j]=arr[i][j];
	        }
	        int temp=r;
	        r=c;
	        c=temp;
	        for (i=0;i<r;i++) 
			{
	            for (j=0;j<c;j++) 
	            arr[i][j]=num[i][j];
	        }
	    }
	    printf("Rotate 180 degree\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			printf("%-3d",num[i][j]);
			printf("\n");
	    }
		break;
		default:
		printf("wrong choice ad program terminated\n");			        
	}
	if(f!=0)	
    f=-1;
	}
}
