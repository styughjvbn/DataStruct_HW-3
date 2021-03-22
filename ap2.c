#include <stdio.h>
#include <stdlib.h>

int main(){
	int list[5];//정수 5개를 저장할수 있는 배열
	int *plist[5];//정수형 포인터 5개를 저장할 수 있는 배열

	printf("[----- [서종원] [2018038031] -----]\n\n");

	list[0]=10;//값 저장
	list[1]=11;//값 저장

	plist[0]=(int*)malloc(sizeof(int));//정수를 저장할 공간을 동적할당하여 할당된 공간의 주소값을 포인터 배열의 첫번째 공간에 저장

	printf("list[0] \t        = %d\n",list[0]);//정수 배열 list의 첫번째 공간에 저장된 값이 출력된다.
	printf("address of list \t= %p\n",list);//배열의 이름은 배열의 첫번째 공간의 주소값을 나타내므로 list[0]의 주소값이 출력된다.
	printf("address of list[0] \t= %p\n",&list[0]);//배열의 첫번째 공간의 주소값이 출력된다.
	printf("address of list + 0\t= %p\n",list+0);//배열의 이름에 +n 연산하는 하는 것은 list[n]의 주소값을 나타내는것과 같으므로 list[0]의 주소값이 출력된다.
	printf("address of list + 1\t= %p\n",list+1);//list[1]의 주소값이 출력된다.
	printf("address of list + 2\t= %p\n",list+2);//list[2]의 주소값이 출력된다.
	printf("address of list + 3\t= %p\n",list+3);//list[3]의 주소값이 출력된다.
	printf("address of list + 4\t= %p\n",list+4);//list[4]의 주소값이 출력된다.
	printf("address of list[4] \t= %p\n",&list[4]);//&연산자를 이용하여 list[4]의 주소값을 출력한다. 윗 줄과 같은 값이 나온다.

	free(plist[0]);
}
