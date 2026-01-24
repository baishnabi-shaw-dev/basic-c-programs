# include<stdio.h>
int main()
{
	int d1,m1,y1,cd,cm,cy,ad,am,ay;
	printf("Enter todays date\n");
	scanf("%d %d %d",&cd,&cm,&cy);
	printf("Enter the Date of Birth\n");
	scanf("%d %d %d",&d1,&m1,&y1);
	if(cd<d1)
	{
		cd+=30;
		cm--;
	}
	ad=cd-d1;
	if(cm<m1)
	{
		cm+=12;
		cy--;
	}
	am=cm-m1;
	ay=cy-y1;
	printf("your age is %d years %d months %d days",ay,am,ad);
	
}
