#include <stdio.h>
#include <stdlib.h>

int a;
int b;


int main(void)
{
	
	printf("�п�J�Ĥ@�ӼƦr(�j):\n");
	scanf("%d", &a);
	printf("�п�J�ĤG�ӼƦr(�p):\n");
	scanf("%d", &b);

	if (a%b == 0){
		printf("%d�O%d������", a, b);
	}
	else {
		printf("%d���O%d������", a, b);
	}


	system("pause");
	return 0;


}