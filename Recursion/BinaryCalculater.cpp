#include<stdio.h>
#include<math.h>
void toHexa(int num)
{
	char hexa[100];
	int i=0,n=num;
	while(n!=0)
	{
		int temp=n%16;
		if(temp<10)
			hexa[i++]='0'+temp;
		else
			hexa[i++]='A'+(temp-10);
		n/=16;
	}
	printf("Hexa-Decimal equivalent: %s",hexa);
	for(n=i-1;n>=0;n--)
		printf("%c",hexa[n]);
}
int main()
{
	int n;
	printf("Enter binary number: ");
	scanf("%d",&n);
	toHexa(n);
	return 0;
}