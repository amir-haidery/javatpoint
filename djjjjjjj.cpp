#include<stdio.h>
#include<stdlib.h>



int main()
{
	char calculation;
	int a,b,n,m;

	char ch;
		printf("welcome to my program for calculating number\n");
	printf("A for additon\n");
	printf("B for sub\n");
	printf("C for division\n");
	printf("D for reminder\n");
	scanf("%c",&calculation);
	do{
	
	switch(calculation)
	{
		case 'A':
			printf("welcome to addition number\n");
			scanf("%d %d",&b,&n);
			m=b+n;
			printf("sum of number is %d",m);
			break;
		case 'B':
			printf("welcome to subtraction number\n");
			scanf("%d %d",&b,&n);
			m=b-n;
			printf("subtraction of number is %d",m);
			break;
		case 'C':
		printf("welcome to division number\n");
			scanf("%d %d",&b,&n);
			m=b/n;
			printf("division of number is %d\n",m);
			break;	
		case 'D':
		printf("welcome to reminder number\n");
			scanf("%d %d",&b,&n);
			m=b%n;
			printf("remin of number is %d\n",m);
			break;
			}
			printf("\n");
			printf("to exit press q or Q to contiue press any key\n");
		}while( ch !='q' && ch !='Q');
	return 0;
}
