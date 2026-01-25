#include<stdio.h>
int main()
{
    int arr[100],n,i,ele,pos;
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
    printf("Enter the element to insert: ");
    scanf("%d",&ele);
    printf("Enter the posotion: ");
    scanf("%d",&pos);
    if(pos<0 || pos>n+1)
    {
      printf("Invalid position!");
      return 0;
    }
    printf("Array Before Insertion\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    for(i=n;i>pos;i--)
    {
        if(i==pos-1)
            break;
        arr[i]=arr[i-1];
    }
    arr[i]=ele;
    n++;
    printf("\nArray After Insertion\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
