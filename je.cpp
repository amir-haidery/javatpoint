#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number;
	printf("enter a number\n");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("%d is even number\n",number);
	}
	else
	{
		printf("%d is a odd number",number);
	}
	return 0;
}
