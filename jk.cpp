#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;
	printf("enter values for a and b\n");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	printf("%d is greater than %d \n",a,b);
	if(a>=b)
	printf("%d is greater than or equal %d\n",a,b);
	if(a<b)
	printf("%d is less than %d \n",a,b);
	if(a<=b)
	printf("%d is less than or equal %d\n",a,b);
	if(a==b)
	printf("%d and %d is equal\n",a,b);
	if(a!=b)
	printf("%d and %d is not equal\n",a,b);
	
	return 0;
	
	
}
