#include<stdio.h>
#include<stdlib.h>

int main()
{
	int age;
	printf("enter your age\n");
	scanf("%d",&age);
    if(age>=18)
	{
	printf("you are eligiable to vote");
	}
	else
	{
	printf("you are not allow to vote");	
	}	
	return 0;
}
