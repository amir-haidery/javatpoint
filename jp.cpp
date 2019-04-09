#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a,b,n,m,total,per;
	char grad;
	printf("enter your subject marks\n");
	scanf("%f%f%f%f",&a,&b,&n,&m);
	
	total=a+b+n+m;
	per=total/4;
	
	if(per>=85)
	grad='A';
	else if(per>=70)
	grad='B';
	else if(per>=55)
	grad='C';
	else if(per>=40)
	grad='D';
	else 
	grad='F';
	
    printf("percentage is %f , Grad is %c\n",per,grad);
    return 0;
}
