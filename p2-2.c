#include <stdio.h>

void print1(int*,int);//print1함수의 원형

int main(){
	int one[] = {0, 1, 2, 3, 4};//정수 5개를 저장할 수 있는 배열을 선언과 함께 초기화

	printf("[----- [서종원] [2018038031] -----]\n\n");

	printf("one     = %p\n",one);//배열의 이름은 배열의 첫번째 공간의 주소값을 나타낸다. one[0]의 주소값이 출력된다.
	printf("&one    = %p\n",&one);//one[0]의 주소값이 출력된다.
	printf("&one[0] = %p\n",&one[0]);//one[0]의 주소값이 출력된다.
	printf("\n");

	print1(&one[0], 5);//print1함수에 one배열의 첫번째 공간의 주소값과 정수 5를 인수로 전달하여 호출한다.

	return 0;
}

void print1 (int *ptr, int rows)//ptr은 call by reference이고 rows는 call by value이다.
{
	int i;
	printf ("Address \t Contents\n");
	for (i = 0; i < rows; i++)//배열의 값과 주소값들을 출력한다.
		printf("%p \t  %5d\n", ptr + i, *(ptr + i));
	/*ptr은 배열one의 첫번째 공간의 주소값을 저장하고 있다. 정수형포인터에 +n연산을 하는 것은 (ptr에 저장된 주소값)+n*sizeof(int)와 같다
	따라서 ptr에 +n연산을 하는 것은 ptr[n]를 나타내는 것이고 이는 one[n]을 나타내는 것과 같다.*/
	printf("\n");
}
