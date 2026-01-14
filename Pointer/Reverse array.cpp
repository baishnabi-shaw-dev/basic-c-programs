#include<stdio.h>
int main()
{
	int i,arr[]={1,2,3,4,5,6,7,8,9,10};
	int *p =arr;
	printf("Original array\n");
	for(i=0;i<10;i++)
		printf("%d, ",arr[i]);
	printf("\nReverse Order array Using Pointer\n");
	for(i=9;i>=0;i--)
		printf("%d, ",*(p+i));
}