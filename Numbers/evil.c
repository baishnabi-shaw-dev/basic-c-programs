#include <stdio.h>
int main() 
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) 
	{
        if (num % 2 == 1) 
		{
            count++;
        }
        num = num / 2;  
    }
    if (count % 2 == 0) 
	{
        printf("The number is an Evil number.\n");
    } else
	{
        printf("The number is not an Evil number.\n");
    }
    return 0;
}

