#include <stdio.h>
#define MAX_SIZE 100 //전처리 과정에서 MAX_SIZE가 100으로 바뀐다.
float sum(float [], int);//sum함수의 원형
float input[MAX_SIZE], answer;//전역변수 선언 main함수와 sum함수에서 모두 사용할수 있다.
int i;//전역변수 선언

void main(void)
{
	printf("[----- [서종원] [2018038031] -----]\n\n");

	for(i=0; i < MAX_SIZE; i++)//정수배열 input에 0~MAX_SIZE-1의 값을 저장한다.
		input[i] = i;

	printf("address of input = %p\n", input);//배열의 이름은 배열의 첫번째 공간의 주소값을 나타내기 때문에 input[0]의 주소값이 출력된다.

	answer = sum(input, MAX_SIZE);//sum함수에 배열input과 MAX_SIZE를 인수로 전달하고 변수answer에 sum함수의 리턴값이 저장된다.
	printf("The sum is: %f\n", answer);//배열input의 모든 값을 더한 값이 출력된다.
}

float sum(float list[], int n)// sum함수의 정의 - 배열input을 매개변수list[]로 받고 MAX_SIZE를 매개변수n으로 받는다. 여기서 배열은 주소값을 넘겨받는 call by reference고 정수는 값을 복사받는 call by value이다.
{
	printf("value of list    = %p\n", list);//주소값을 넘겨받았으므로 input[0]의 주소값을 출력된다.
	printf("address of list  = %p\n\n", &list);//매개변수 list[]의 주소값을 출력된다. list[]는 배열input의 주소값을 받는 매개변수이기 때문에 배열input과 다른 공간에 존재한다.

	int i;
	float tempsum = 0;//합을 저장한 변수 선언
	for(i = 0; i < n; i++)//배열input의 모든 값을 더한다.
		tempsum += list[i];
	return tempsum;//배열input의 모든 값의 합을 리턴한다.
}
