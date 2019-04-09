#include<stdio.h>

int main()
{
	int counter=1,counter2=1;
	while(counter2<=3)
	{
		while(counter<=10)
		{
			printf("%d--->learninglab eduaction\n",counter);
			if(counter == 5)
			{
				break;
			}
			counter++;
		}
		printf("--------------------------------------------\n");
		counter2++;
	}
	return 0;
}
