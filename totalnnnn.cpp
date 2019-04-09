#include<stdio.h>


int main()
{

	int a,d,n,s,al;

	printf("enter the first elementof of seires\n:");
	scanf("%d",&a);

	printf("enter the difference between of seires\n:");
	scanf("%d",&d);

	printf("enter the number of seires\n:");
	scanf("%d",&n);
     int i=0;

     printf("(i)\t(al)\t(s)\n ");
	while(i<n)
	{
		al=a+i*d;
		s=s+al;
		printf("%d\t%d\t%d\t\n",i,al,s);
		i++;
	}
	printf("final sum of seires is s=%d\n",s);
	return 0;



}
