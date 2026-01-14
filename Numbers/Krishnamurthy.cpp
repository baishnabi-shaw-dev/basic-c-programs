# include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
    int a=n;int s=0; 
        while (n!=0) 
        {
            int d=n%10;
			int f=1;
            for (int i=d;i>0;i--)
            {
                f=f*i;
            }
            n=n/10;
            s=s+f;
        }
        if(s==a)
            printf("No. is Krishnamurthy");
        else
            printf("No. is not Krishnamurthy ");
}
        
        
