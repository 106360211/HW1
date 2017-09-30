#include <stdio.h>
#include <stdlib.h>

int a, b, c,i;

int main(void)
{   printf("number\tsquare\tcube\n");
	

	for (i = 0; i < 11;i+=1)
	{
		printf("%d\t%d\t%d\n",i,i*i,i*i*i);

	}


	system("pause");
	return 0;


}