#include <stdio.h>

struct student{//구조체 student 정의
	char LastName[13]; //13크기의 문자형 배열 이므로 13byte
	int stdentID;//정수형 변수이므로 4byte
	short grade;//short형 변수이므로 2byte
};

int main(){
	struct student pst;//구조체 pst 선언

	printf("[----- [서종원] [2018038031] -----]\n\n");

	printf("size of student = %ld\n",sizeof(struct student));//구조체 정의student의 크기 24byte 출력
	/*why? 문자형 배열의 13byte+3padding byte, short형 변수의 2byte+2padding byte가 더해져 24byte가 출력
	즉, GCC는 패딩을 하며 4바이트씩 채워 넣는다. */
	printf("size of int = %ld\n",sizeof(int));//정수형의 크기 4byte 출력
	printf("size of short = %ld\n",sizeof(short));//short형 크기 2byte 출력

	return 0;
}
