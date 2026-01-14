# include<stdio.h>
int main()
{
	int i,arr[100],n,j,k,s=0;
	printf("Enter the length :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
	    {
	    	if(arr[j]==arr[i])
	    	  {
	    	  	s++;
	    		for(k=j;k<n;k++)
	    		arr[k]=arr[k+1];
	    		n--;
			  }
			  
			else
			j++;
		}
    }
	printf("\nAfter deleting the dublicate elements\n");
	if(s==0)
	printf("No dulicate element found\n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	}
