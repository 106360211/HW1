#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int n1;
	int n2;
	int n3;

	printf("�п�J3�ӼƦr:");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("�A��J����J3�ӼƦr�O: %d %d %d \n", n1, n2, n3);

	if (n1 > n2){
		if (n1 > n3){
			if (n2 > n3){
				printf("�̤j�ȬO%d,�̤p�ȬO%d\n",n1,n3);
			}
		}	
	}

	if (n1 > n2){
		if (n1 > n3){
			if (n3 > n2){
				printf("�̤j�ȬO%d,�̤p�ȬO%d\n", n1, n2);
			}
		}
	}

	if (n2 > n1){
		if (n2 > n3){
			if (n1 > n3){
				printf("�̤j�ȬO%d,�̤p�ȬO%d\n", n2, n3);
			}
		}
	}

	if (n2 > n1){
		if (n2 > n3){
			if (n3 > n1){
				printf("�̤j�ȬO%d,�̤p�ȬO%d\n", n2, n1);
			}
		}
	}

	if (n3 > n1){
		if (n3 > n2){
			if (n1 > n2){
				printf("�̤j�ȬO%d,�̤p�ȬO%d\n", n3, n2);
			}
		}
	}

	if (n3 > n1){
		if (n3 > n2){
			if (n2 > n1){
				printf("�̤j�ȬO%d,�̤p�ȬO%d\n", n3, n1);
			}
		}
	}

	


	

	system("pause");
	return 0;
	
}

