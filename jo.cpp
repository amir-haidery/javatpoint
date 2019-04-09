#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x,y,quo,rem;
	printf("enter the two number for eveluate\n");
	scanf("%d%d",&x,&y);
	if(y)
	{
		quo=(float)x/y;
		rem=x%y;
		printf("Quotient= %d,reminder= %d\n",quo,rem);
	}
	else{
		printf("divide by zero is error\n");
	}
	return 0;
}
