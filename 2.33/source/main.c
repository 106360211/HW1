#include <stdio.h>
#include <stdlib.h>

float a, b, c, d, e,f;

int main(void)
{
	printf("�п�J�C�Ѧ�p���{:");
	scanf("%f", &a);
	printf("\n�п�J�C�[�ڨT�o����:");
	scanf("%f", &b);
	printf("\n�п�J�C�[�ڨT�o��p���{��:");
	scanf("%f", &c);
	printf("\n�п�J�C�Ѱ����O:");
	scanf("%f", &d);
	printf("\n�п�J�C�ѹL���O:");
	scanf("%f", &e);
	f = a / c*b + d + e;
	printf("\n�C�Ѷ}���W�Z����O�O:%f\n", f);

	printf("\n���]�P��L3�H�@��,��O�O%f\n", f/4);
	printf("\n�i�H�٤U%f��", f-(f / 4));

	system("pause");
	return 0;

}