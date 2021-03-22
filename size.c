#include <stdio.h>
#include <stdlib.h>

int main(){
	int **x;//정수형 이중포인터 선언

	printf("[----- [서종원] [2018038031] -----]\n\n");

	printf("sizeof(x) = %lu\n",sizeof(x));//이중포인터 x는 주소값을 가지므로 주소값을 나타낼수 있는 포인터형의 크기 4byte공간을 가진다.
	printf("sizeof(*x) = %lu\n",sizeof(*x));//이중포인터에 역참조연산을 한번만 했을 때도 주소값을 타나내므로 포인터형의 크기와 같은 4byte의 공간을 가진다.
	printf("sizeof(**x) = %lu\n",sizeof(**x));//이중포인터에 역참조연산을 두번 수행하면 해당 주소값에 저장된 정수의 값을 나타내므로 정수형의 크기와 같은 4byte의 공간을 가진다.

	return 0;
}

