# include<stdio.h>
int main()
{
	int i,arr[100],n,t,s;
	printf("Enter the length ");
	scanf("%d",&n);
	printf("Enter the elements  ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("The palindrome numbers \n");
	for(i=0;i<n;i++)
	{
		 int num=arr[i];
		s=0;
	while(num!=0)
        {
            t=num%10;
            s=s*10+t;
            num=num/10;
        }
        	if(s==arr[i])	
		printf("%d ",arr[i]);
	}
}
