#include <stdio.h>
#include <stdlib.h>

int a;
int b;


int main(void)
{
	
	printf("請輸入第一個數字(大):\n");
	scanf("%d", &a);
	printf("請輸入第二個數字(小):\n");
	scanf("%d", &b);

	if (a%b == 0){
		printf("%d是%d的倍數", a, b);
	}
	else {
		printf("%d不是%d的倍數", a, b);
	}


	system("pause");
	return 0;


}