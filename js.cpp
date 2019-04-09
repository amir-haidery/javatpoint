#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,prod=1,reminder;
	printf("enter a number\n");
	scanf("%d",&n);
	while(n>0)
	{
		reminder=n%10;
		prod=prod*reminder;
		n/=10;
	}
	printf("the product of number is %d\n",prod);
}
