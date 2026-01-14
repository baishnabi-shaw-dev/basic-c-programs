#include<stdio.h>
int binarySearch(int arr[],int lb,int ub,int mid,int s,int fl)
{
	if(lb<=ub && fl==0)
	{
		mid=(ub+lb)/2;
		if(s==arr[mid])
		{
			fl=1;
			return fl;
		}
		else if(s>arr[mid])
		{
			lb=mid+1;
			return(binarySearch(arr,lb,ub,0,s,fl));
		}
		else
		{
			ub=mid+1;
			return(binarySearch(arr,lb,ub,0,s,fl));
		}                                      
	}
	else
		return fl;
}
int main()
{
	int arr[100];
	int i,j,n,l;
	printf("Enter length of the array: ");
	scanf("%d",&l);
	printf("Enter the elements: \n");
	for(i=0;i<l;i++)
		scanf("%d ",&arr[i]);
	//short
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l-i-1;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	//search
	printf("Enter the number to search: ");
	scanf("%d",&n);
	binarySearch(arr,0,l-1,0,n,0);
}