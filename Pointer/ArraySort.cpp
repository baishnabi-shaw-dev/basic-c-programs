#include<stdio.h>
void display(int arr[10])
{
	int i;
	for(i=0;i<9;i++)
		printf("%d, ",arr[i]);
	printf("%d\n",arr[i]);
}
int main()
{
	int arr[10]={8,4,2,6,10,1,3,7,9,5};
	int i,j,k;
	int *p=arr;
	printf("Original Array\n");
	display(arr);
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				k=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=k;
			}
		}
	}
	printf("Sorted Array\n");
	display(arr);
}