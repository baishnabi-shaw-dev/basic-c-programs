#include<stdio.h>
struct distance
{
	double distnc;
};
int main()
{
	struct distance std[2];
	int i;
	for(i=0;i<2;i++) 
	{
		printf("Enter the distance: ");
		scanf("%lf",&std[i].distnc);
	}
	printf("The sum of two distance\n");
	double d=std[0].distnc+std[1].distnc;
	printf("%.2lf",d); 
}