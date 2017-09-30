#include <stdio.h>
#include <stdlib.h>

int a;
int main(void)
{
	printf("叫块1俱计:");
	scanf_s("%d",&a);
	printf("块俱计琌:%d \n",a);

	

	if (a % 2 == 0){
		printf("%d 琌案计 \n",a);
	}
	else {
		printf("%d 琌计 \n",a);
	}


	system("pause");
	return 0;

}