#include<stdio.h>
int main()
{
	int num[100],fi=-1,li=0,s,c,fop=0,nm;
	printf("Enter length of the array: ");
	scanf("%d",&s);
	do{
		again:
		printf("\n1 for add first \n2 for add last \n3 for delete first \n4 for delete last \n5 to terminate\n");
		scanf("%d",&c);
		if(c!=2 && fop==0)
		{
			printf("first operation should be add last\n");
			goto again;
		}
		else
			fop=1;
		switch(c)
		{
			case 1:
				if(fi<0)
					printf("No space to add first\n");
				else
				{
					printf("Enter number to add: ");
					scanf("%d",&nm);
					num[fi--]=nm;
				}
			break;
			case 2:
				if(li>=s)
					printf("No space to add last\n");
				else
				{
					printf("Enter number to add: ");
					scanf("%d",&nm);
					num[li++]=nm;
				}
			break;
			case 3:
				if(fi==li)
					printf("No element to delete\n");
				else
				{
					num[fi]=0;
					fi++;
				}
			break;
			case 4:
				if(li==fi)
					printf("No element to delete\n");
				else
				{
					num[li]=0;
					li--;
				}
			break;
			default:
				printf("Program terminated\n");
		}
		for(int i=fi+1;i<li;i++)
			printf("%d ",num[i]);
	}while(c<5);
	return 0;
}