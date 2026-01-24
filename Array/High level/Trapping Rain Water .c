# include<stdio.h>
int main()
{
	int i,j,arr[100],n,ml,mr,min,water=0;
	printf("Enter the length :");
	scanf("%d",&n);
	printf("Enter the Elements :");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		ml=arr[i];
		mr=arr[i];
	
	for(j=0;j<=i;j++)//for left
	{
		if(arr[j]>ml)
		ml=arr[j];
	}
	for(j=i;j<n;j++)//for right
	{
		if(arr[j]>mr)
		mr=arr[j];
    }
    if(ml<mr)
      min=ml;
      else 
      min=mr;
	water=water+(min-arr[i]);
}
	printf("\nTotal water tapped = %d",water);
}
