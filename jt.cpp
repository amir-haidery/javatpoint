#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,num;
	long fact=1;
	printf("enter a number\n");
	scanf("%d",&n);
	num=n;
	if(n<0)
	{
		printf("no factorial od negative number\n");
	}
	else{
		while(n>1)
		{
			fact*=n;
			n--;
		}
		printf("factorial of number %d =%1d",num,fact);
	}
}
