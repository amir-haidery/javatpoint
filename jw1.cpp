#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,m,rem,sum=0;
	printf("enter the number\n");
	scanf("%d",&n);
     
    m=n;
    while(n!=0)
    {
    	rem=rem%10;
    	sum=sum+rem;
    	n=n/10;
	}
	printf("the sum of %d is=%d\n ",m,sum);
	return 0;
	
}
