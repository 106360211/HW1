#include <stdio.h>
#include <stdlib.h>

int a;
int main(void)
{
	printf("�п�J1�Ӿ��:");
	scanf_s("%d",&a);
	printf("�A��J����ƬO:%d \n",a);

	

	if (a % 2 == 0){
		printf("%d �O���� \n",a);
	}
	else {
		printf("%d �O�_�� \n",a);
	}


	system("pause");
	return 0;

}