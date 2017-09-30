#include <stdio.h>
#include <stdlib.h>

float a, b, c, d, e,f;

int main(void)
{
	printf("請輸入每天行駛里程:");
	scanf("%f", &a);
	printf("\n請輸入每加侖汽油價格:");
	scanf("%f", &b);
	printf("\n請輸入每加侖汽油行駛里程數:");
	scanf("%f", &c);
	printf("\n請輸入每天停車費:");
	scanf("%f", &d);
	printf("\n請輸入每天過路費:");
	scanf("%f", &e);
	f = a / c*b + d + e;
	printf("\n每天開車上班的花費是:%f\n", f);

	printf("\n假設與其他3人共乘,花費是%f\n", f/4);
	printf("\n可以省下%f元", f-(f / 4));

	system("pause");
	return 0;

}