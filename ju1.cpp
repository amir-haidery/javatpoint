#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int rem,nsave,n,dec=0,j=1,d;
	printf("enter the binary number\n");
	scanf("%d",&n);
	nsave=n;
	while(n>0)
	{
		rem=n%10;
		d=j*rem;
		dec=dec+d;
		j=j*2;
		n/=10;
		
	}
	
	printf("binary number =%d,decimal number=%d\n",nsave,dec);
}
