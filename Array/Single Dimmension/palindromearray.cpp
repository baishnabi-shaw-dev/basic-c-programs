
# include<stdio.h>
int main()
{
	int i,arr[100],n,arn[100],c=0;
	printf("Enter the length ");
	scanf("%d",&n);
	printf("Enter the elements ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
	if(arr[i]!=arr[n-1-i])
		{
		    c++;
		    break;
		}
    }
	if(c==0)
	printf("\n Yes, the array is palindrome");
	else
	printf("\n No, the array is not palindrome");	
}
