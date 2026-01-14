#include<stdio.h>
int main()
{
    int arr[100],n,i,ele,p;
    printf("Enter the length: ");
    scanf("%d",&n);
    if(n>=100)
    {
        printf("Invalid size!!");
        return 0;
    }
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
        	while((n-1)>0)
		{  
		   printf("\nEnter 0 to stop and 1 to continue ");
           scanf("%d" ,&p);
           if(p==0)
            {
           	printf("program finished !!");
           	break;
		    }
		   else
		   {
		    getchar();
			for(i=0;i<n-1;i++)
			 {
				arr[i]=arr[i+1];
			 }
		    n--;
	       printf("\nAfter deleting\n");
	       for(i=0;i<n;i++)
		   printf("%d ",arr[i]);
	       printf("\nEnter the element to insert: ");
		   scanf("%d",&ele);
		   printf("%d ",arr[i]);
           for(i=n;i>0;i--)
            {
            if(i==n)
            break;
            arr[i]=arr[i-1];
            }
           arr[i]=ele;
           n++;
           printf("\nArray After Insertion\n");
           for(i=0;i<n;i++)
           printf("%d ",arr[i]);
         } 
        }
}
      

