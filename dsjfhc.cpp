#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int m,rem,n,d,dec=0,j=1;
	printf("enter the the binery number\n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		d=j*rem;
		dec=d+dec;
		j=j*2;
		n=n/10;
		
	}
	printf("binary number =%d and decimal number=%d\n",m,dec);
}
