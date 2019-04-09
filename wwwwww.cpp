#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size;
	printf("enter how many subjects marks want to store\n");
	scanf("%d",&size);
	
	int marks[size];
	int counter;
	
	for( counter = 0; counter < size ; counter++)
	{
		printf("enter the marks for subject %d\n",counter+1);
		scanf("%d",&marks[counter]);
		
	}
	for(counter = 0;counter<size ; counter++)
	{
		printf("the marks for the subject %d is %d\n",counter,marks[counter]);
		
		
	}
	return 0;
}
