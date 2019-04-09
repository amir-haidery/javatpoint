#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b;
	printf("enter two number\n");
	scanf("%f%f",&a,&b);
	
	printf("sum=%.2f\n",a+b);
	printf("difference=%.3f\n",a-b);
	printf("product=%.4f\n",a*b);
	printf("quotient=%.2f\n",a/b);
	
	return 0;
}
