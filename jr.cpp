#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int n,m,sum=0,reminder;
printf("enter a number:\n");
scanf("%d",&n);

while(n!=0){

    reminder=n%10;
    sum+=reminder;
    n=n/10;
}
printf("sum=%d",sum);
}
