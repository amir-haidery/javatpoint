#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int a,b,c;
	printf("enter value for a and b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("%d is greater than %d and %d\n",a,b,c);
	}else if(b>c && b>c)
	{
		printf("%d is greater than %d and %d\n",b,a,c);
	}else if(c>b && c>a)
	{
		printf("%d is greater than %d and %d\n",c,a,b);
	}else
	{
		printf("first vale and second value and thired value  are equal\n",a,b,c);
	}
	return 0;
}
