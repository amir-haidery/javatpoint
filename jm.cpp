#include<stdio.h>
#include<stdlib.h>


int main (void)
{
	int number=0;
	printf("enter a number:\n");
	scanf("%d",&number);
	
	switch(number)
	{
		case 10:
		printf("numberis equal to 10\n");
			break;
		case 50:
		printf("number is equal to 50\n");
		    break;
		case 100:
		printf("number is equal to 100\n");
		    break;
		default:
		printf("number is no equal to 50,10,100\n");    
			
	}
	return 0;
	
		
}
