#include <stdio.h>
#include <stdlib.h>

int a;
float h,w,bmi;


int main(void)
{
	printf("請輸入制度: 1.公制 2.英制 ");
	scanf("%d",&a);

	if (a == 1){
		printf("\n您選擇了公制\n\n");
		printf("請輸入身高(公分)體重(公斤):");
		scanf("%f %f", &h , &w);
		bmi = w / (h/100) / (h/100);
		printf("\n您的BMI指數是:%f\n\n", bmi);

	}

	if (a == 2){
		printf("\n您選擇了英制\n\n");
		printf("請輸入身高(吋)體重(磅):");
		scanf("%f %f", &h, &w);
		bmi = w * 703 / h / h;
		printf("\n您的BMI指數是:%f\n\n", bmi);

	}

	printf("BMI VALUES \n");
	printf("Underweight:    less than 18.5\n");
	printf("Normal:         between 18.5 and 24.9\n");
	printf("Overweight:     between 25 and 29.9\n");
	printf("Obese:          30 or greater\n");
	
	
	
	system("pause");
	return 0;
}


