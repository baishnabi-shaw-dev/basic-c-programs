#include<stdio.h>
#include<string.h>
struct Student
{
	char nm[30];
	int roll;
	char ads[100];
	int age;	
};
int main()
{
	int i,a,n,f=0;
	struct Student std[5];
	for(i=0;i<5;i++)
	{
		printf("Enter Student name: ");
		fgets(std[i].nm,30,stdin);
		printf("Enter roll: ");
		scanf("%d",&std[i].roll);
		printf("Enter Student Address(equal or more then 10 digits): ");
		while(1)
		{
			fgets(std[i].ads,100,stdin);
			if(strlen(std[i].ads)>=10)
				break;
		}
		printf("Enter Student age(in between 11 to 14): ");
		while(1)
		{
			scanf("%d",&std[i].age);
			if(std[i].age<=14 && std[i].age>=11)
				break;
			printf("Invalid age input in the range of 11-14\n");
		}
		getchar();
	} 
	//print
	printf("\nThe student having the age 14\n");
	for(i=0;i<5;i++)
	{
		if(std[i].age==14)
			printf("%s",std[i].nm);
	}
	printf("\nThe student having even roll number\n");
	for(i=0;i<5;i++)
	{
		if(std[i].roll%2==0)
			printf("%s",std[i].nm);	
	}
	printf("\nEnter the roll number of the student to get all the detalis\n");
	scanf("%d",&a);
	for(i=0;i<5;i++)
	{	
		if(std[i].roll==a)
		{
			printf("\n Name %sRoll %d\naddress %sage%d\n",std[i].nm,std[i].roll,std[i].ads,std[i].age);
			f=1;	
		}	
	}	
	if(!f)
		printf("Roll not found\n");
}