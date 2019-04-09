#include<stdio.h>
#include<stdlib.h>

int main()
{
	int marks;
	printf("enter your marks\n");
	scanf("%d",&marks);
	if(marks>85 && marks<=100)
	{
		printf(" congrats! you scored grade A\n");
	}else if(marks>60 && marks <=85)
	{
	printf("you scored garde B+...\n");
	}else if(marks>40 && marks<=60)
	{
	printf("you scored garde C..\n ");
	}
	else
	{
	printf("sorry you are fail");
	}
	return 0;
	
}
