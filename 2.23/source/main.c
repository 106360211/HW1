#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int n1;
	int n2;
	int n3;

	printf("叫块3计:");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("块块3计琌: %d %d %d \n", n1, n2, n3);

	if (n1 > n2){
		if (n1 > n3){
			if (n2 > n3){
				printf("程琌%d,程琌%d\n",n1,n3);
			}
		}	
	}

	if (n1 > n2){
		if (n1 > n3){
			if (n3 > n2){
				printf("程琌%d,程琌%d\n", n1, n2);
			}
		}
	}

	if (n2 > n1){
		if (n2 > n3){
			if (n1 > n3){
				printf("程琌%d,程琌%d\n", n2, n3);
			}
		}
	}

	if (n2 > n1){
		if (n2 > n3){
			if (n3 > n1){
				printf("程琌%d,程琌%d\n", n2, n1);
			}
		}
	}

	if (n3 > n1){
		if (n3 > n2){
			if (n1 > n2){
				printf("程琌%d,程琌%d\n", n3, n2);
			}
		}
	}

	if (n3 > n1){
		if (n3 > n2){
			if (n2 > n1){
				printf("程琌%d,程琌%d\n", n3, n1);
			}
		}
	}

	


	

	system("pause");
	return 0;
	
}

