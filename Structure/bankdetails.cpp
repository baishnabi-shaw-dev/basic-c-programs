#include<stdio.h>
#include<string.h>
struct Customer
{
	char nm[30];
	int accountnumber;
	int balance;	
};
int main()
{
	int i,a,n,f=0;
	struct Customer std[5];
	for(i=0;i<5;i++)
	{
		printf("Enter Customer name: ");
		fgets(std[i].nm,30,stdin);
		printf("Enter Customer Number(equal or more then 10 digits): ");
		while(1)
		{
			scanf("%d",&std[i].accountnumber);
			if(std[i].accountnumber<=10)
				break;
			printf("Invalid Account number\n");	
		}
		printf("Enter Account Balance in $: ");
		scanf("%d$",&std[i].balance);
		getchar();
	} 
	//print
	printf("\nName of the customer having less than $200\n");
	for(i=0;i<5;i++)
	{
		if(std[i].balance<200)
		{
			printf("%s",std[i].nm);
		}
	}
	int nbalance;
	for(i=0;i<5;i++)
	{
		if(std[i].balance>=1000)
		{
			nbalance=std[i].balance+100;
			printf("%s Name \n",std[i].nm);
			printf("\n%d The old balance\n",std[i].balance);
			printf("\n%d The new balance\n",nbalance);
		}
	}
}