#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	do
	{
		printf("welcome to learinhlab educatin\n");
		printf("1 C programming\n");
		printf("2 C++ programming\n");
		printf("1 java programming\n");
		printf("press q and Q to exit or any key to see this menu again \n");
		ch = getch ();
	}while((ch != 'q' && ch != 'Q'));
	
	printf("thank you to visit\n");
	return 0;
}
