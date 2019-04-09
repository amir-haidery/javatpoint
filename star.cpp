#include<stdio.h>

int main()
{
	
	int j,i,n,l=0,d;
	printf("enter the line no:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("#");
			
		}
		l++;
		printf("%d",l);
		printf("\n");
	}
}
