#include<stdio.h>
struct student{
	char nm[30];
	int cls;
	int roll;
};
int main()//main funtion
{
	int i=0;
	struct student st[1];
	printf("Enter name: ");
	scanf("%s",&st[0].nm);
	printf("Enter class: ");
	scanf("%d",&st[0].cls);
	printf("Enter roll: ");
	scanf("%d",&st[0].roll);
	
	printf("Student name: %s\n",st[0].nm);
	printf("Student class: %d\n",st[0].cls);
	printf("Student roll: %d\n",st[0].roll);
}