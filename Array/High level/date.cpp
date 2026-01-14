#include<stdio.h>
int input(int s, int e)
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n<=e&&n>=s)
			return n;
		printf("Invalid Input!\n");
	}
}
int main()
{
	int d1,d2,m1,m2,y1,y2,month[12]={31,28,31,30,31,30,31,31,30,31,30,31},cd=26,cm=5,cy=2025;
	printf("Enter year of Birth: ");
	y1=input(1800,2025);
	printf("Enter month of Birth: ");
	if(y1==2025)
		m1=input(1,5);
	else
		m1=input(1,12);
	printf("Enter day of birth: ");
	if(y1==2025 && m1==5)
		d1=input(1,26);
	else
	{
		if(m1==2 && y1%4==0)
			d1=input(1,29);
		else
			d1=input(1,month[m1]);                        
	}
	printf("Your date of birth is: %02d:%02d:%d\n",d1,m1,y1);
	printf("Todays date is: 26:05:2025\n");
	if(cd<d1)
	{
		cd+=30;
		cm--;
	}
	d2=cd-d1;
	if(cm<m1)
	{
		cm+=12;
		cy--;
	}
	m2=cm-m1;
	y2=cy-y1;
	printf("Your age is:%d year %d month %d day",d2,m2,y2);
}
