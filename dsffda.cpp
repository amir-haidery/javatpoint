#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,prod=1;
	do
	{
		printf("enter the number(enter the 0to stop) :");
		scanf("%d",&n);
		prod=prod*n;
	}while(n!=0);
	printf("sum number is %d\n",prod);

}
