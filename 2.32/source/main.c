#include <stdio.h>
#include <stdlib.h>

int a;
float h,w,bmi;


int main(void)
{
	printf("�п�J���: 1.���� 2.�^�� ");
	scanf("%d",&a);

	if (a == 1){
		printf("\n�z��ܤF����\n\n");
		printf("�п�J����(����)�魫(����):");
		scanf("%f %f", &h , &w);
		bmi = w / (h/100) / (h/100);
		printf("\n�z��BMI���ƬO:%f\n\n", bmi);

	}

	if (a == 2){
		printf("\n�z��ܤF�^��\n\n");
		printf("�п�J����(�T)�魫(�S):");
		scanf("%f %f", &h, &w);
		bmi = w * 703 / h / h;
		printf("\n�z��BMI���ƬO:%f\n\n", bmi);

	}

	printf("BMI VALUES \n");
	printf("Underweight:    less than 18.5\n");
	printf("Normal:         between 18.5 and 24.9\n");
	printf("Overweight:     between 25 and 29.9\n");
	printf("Obese:          30 or greater\n");
	
	
	
	system("pause");
	return 0;
}


