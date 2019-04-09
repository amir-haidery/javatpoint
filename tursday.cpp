#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y,quo,rem;
	printf("enter a number:\n");
	scanf("%d%d",&x,&y);
	if(y)
	{
		quo=x/y;
		rem=x%y;
	printf("reminder=%d  quotient=%d",rem,quo);
	
    }
    else 
	printf("  divided by zero error\n");
	
}
