#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,max;
	printf("enter values for a and b\n");
	scanf("%d%d",&a,&b);
	max= a>b ? a :b;
	printf("the larger of %d and %d is %d\n",a,b,max);
	
	return 0;
}
