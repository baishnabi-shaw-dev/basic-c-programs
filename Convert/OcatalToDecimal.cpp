#include<stdio.h>
#include<math.h>
int main()
{
	int arr[10];
	int n,j,i=0,d=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d==>",n);
	while(n!=0)
	{
		arr[i]=n%10;
		n/=10;
		i++;
	}
     n=i;
     for(i=0;i<n;i++)
      {
        d=d+arr[i]*(int)pow(8,i);
      }
    printf("%d",d);
}
