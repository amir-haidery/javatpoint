#include<stdio.h>

int main()
{
	int i,j,k;
	int p[]={1,2,3,4,5,6,7,8,9,
	         1,3,4,5,6,7,8,9,9,9,
		     2,3,4,5,2,5,7,8,5,3,
			  1,2,4,7,4,8,9,3,1};
			  
	int N = sizeof(p)/sizeof(p[0]);
		 
	int	 f[10];
	for(i=0;i<10;i++)
	{
		f[i]=0;
	}
	for(j=0;j<N;j++)
	{
		f[p[j]]++;
	}
	printf("poll\tfreq\tHistogram\n.");
	for(i=0;i<10;i++)
	{
		
		printf("%d\t%d\t",i,f[i]);
		for(k=0; k < f[i];k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
	
}
