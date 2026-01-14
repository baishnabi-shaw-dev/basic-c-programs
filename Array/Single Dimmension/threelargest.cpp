#include<stdio.h>
int main()
{
    int i, n,arr[100],f=-1,s=-1,t=-1;
    printf("Enter the length: ");
    scanf("%d", &n);
    if (n>=100)
    {
        printf("Invalid length!");
        return 0;
    }
    printf("Enter the value for array\n");
    for (i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for (i=0;i<n;i++)
    {
        if(f==-1 || arr[i]>arr[f])
        {
            t=s;
            s=f;
            f=i;
        }
        else if((s==-1 || arr[i]>arr[s]) && arr[i]!=arr[f])
        {
            t=s;
            s=i;
        }
        else if((t==-1 || arr[i]>arr[t]) && arr[i]!=arr[f] && arr[i]!=arr[s])
        {
            t=i;
        }
    }
    if (f!=-1)
        printf("\nThe first highest %d\n", arr[f]);
    else
        printf("No first highest found\n");
    if (s!=-1)
        printf("The second highest %d\n", arr[s]);
    else
        printf("No second highest found\n");
    if (t!=-1)
        printf("The third highest %d\n", arr[t]);
    else
        printf("No third highest found\n");
}
