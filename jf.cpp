#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	
	printf("enter the numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c){
	printf("%d is largest number: \n",a);
   }
   if(b>a && b>c)
   {
   	printf("%d is largest number:\n",b);
   }
   if(c>a && c>b)
   {
   	printf("%d is largest number :\n",c);
   }
   if(a==b && b==c)
   {
   	printf("the number is equal\n");
   }
   
   return 0;
}
