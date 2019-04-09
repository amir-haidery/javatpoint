#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number=0;
	printf("enter a number\n");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("%d is even number\n",number);
	}
	else
	{
		printf("%d is odd number\n",number);
	}
	return 0;
}
