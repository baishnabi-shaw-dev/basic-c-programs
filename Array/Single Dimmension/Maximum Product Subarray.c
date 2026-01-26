#include<stdio.h>
int main() 
{
	int i,arr[100],n,i,maxprod,minprod,temp,sum;
	printf("Enter the length ");
	scanf("%d",&n);
	printf("Enter the elements ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
    maxProd = arr[0];
    minProd = arr[0];
    result = arr[0];
    for (i=1;i<n;i++) 
	{
        current=arr[i];
        temp= maxProd;
        //maxchecking
        if (current>current*maxProd && current > current*minProd) 
            maxProd=current;
         else if (current*maxProd > current*minProd) 
            maxProd=current*maxProd;
         else 
            maxProd=current*minProd;
        //minchecking
        if (current<current*temp && current<current*minProd) 
            minProd=current;
        else if (current*temp < current*minProd) 
            minProd=current*temp;
        else 
            minProd=current*minProd;
        //result
        if (maxProd>sum) 
            sum=maxProd;
    }
    printf("Maximum product subarray is: %d\n", sum);
}