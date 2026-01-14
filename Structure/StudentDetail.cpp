#include<stdio.h>
struct student
{
	char nm[30];
	int roll;
	int age;
};
int main()
{
	struct student std[5];
	int i;
	for(i=0;i<5;i++) 
	{
		printf("Enter name: ");
		fgets(std[i].nm, 30, stdin);
		printf("Enter roll: ");
		scanf("%d",&std[i].roll);
		printf("Enter age: ");
		scanf("%d",&std[i].age);
		getchar();
	}
	printf("Detail of roll 2\n");
	printf("\nName: %s roll: %d\nAge: %d",std[2].nm,std[2].roll,std[2].age);
}