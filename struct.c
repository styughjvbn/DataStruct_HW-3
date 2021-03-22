#include <stdio.h>

struct student1{//typedef를 사용하지 않고 구조체 student1 정의
	char lastName;
	int studentID;
	char grade;
};

typedef struct{//typedef를 사용하여 구조체 student2 정의
	char lastName;
	int studentID;
	char grade;
}student2;

int main(){
	struct student1 st1={'A',100,'A'};//typedef를 사용하지 않았기 때문에 선언할때 'struct'를 꼭 써줘야한다.

	printf("[----- [서종원] [2018038031] -----]\n\n");

	printf("st1.lastName = %c\n",st1.lastName);//'.'연산자를 이용하여 구조체 st1의 lastName멤버에 접근하여 값 출력
	printf("st1.studentID = %d\n",st1.studentID);//'.'연산자를 이용하여 구조체 st1의 studentID멤버에 접근하여 값 출력
	printf("st1.grade = %c\n",st1.grade);//'.'연산자를 이용하여 구조체 st1의 grade멤버에 접근하여 값 출력

	student2 st2={'B',200,'B'};//typedef를 사용하여 정의하였기 때문에 선언할때 'struct'를 쓰지 않아도 된다.

	printf("\nst2.lastName = %c\n",st2.lastName);//'.'연산자를 이용하여 구조체 st2의 lastName멤버에 접근하여 값 출력
	printf("st2.studentID = %d\n",st2.studentID);//'.'연산자를 이용하여 구조체 st2의 studentID멤버에 접근하여 값 출력
	printf("st2.grade = %c\n",st2.grade);//'.'연산자를 이용하여 구조체 st2의 grade멤버에 접근하여 값 출력

	student2 st3;//선언만 하고 초기화는 하지 않는다.

	st3=st2;//구조체 st3에 st2의 값을 복사한다. 컴파일러마다 다르며 GCC는 작동한다.

	printf("\nst3.lastName = %c\n",st3.lastName);//'.'연산자를 이용하여 구조체 st3의 lastName멤버에 접근하여 값 출력, st2의 lastName멤버의 값과 같은 값이 출력된다.
	printf("st3.studentID = %d\n",st3.studentID);//'.'연산자를 이용하여 구조체 st3의 studentID멤버에 접근하여 값 출력, st2의 studentID멤버의 값과 같은 값이 출력된다.
	printf("st3.grade = %c\n",st3.grade);//'.'연산자를 이용하여 구조체 st3의 grade멤버에 접근하여 값 출력, st2의 grade멤버의 값과 같은 값이 출력된다.

	/*if(st3==st2)//이렇게 동등성 검사를 하는 것은 불가능하며 각각의 멤버별로 검사를 해야한다.
		printf("equal\n");
	else
		printf("not equal\n");
	*/
}
