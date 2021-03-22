#include <stdio.h>
#include <stdlib.h>

int main() {
	int list[5]; //정수를 5개 저장할 수 있는 배열
	int *plist[5]={NULL,};//정수형 포인터를 5개 저장할 수 있는 배열

	printf("[----- [서종원] [2018038031] -----]\n\n");

	plist[0]=(int*)malloc(sizeof(int));//정수를 저장할 공간을 동적할당하고 할당된 공간의 주소값을 포인터 배열 첫번째 자리에 저장

	list[0]=1;//값 저장
	list[1]=100;//값 저장

	*plist[0]=200;//역참조 연산자를 이용하여 동적할당받은 공간에 값 저장

	printf("value of list[0]         =%d\n",list[0]);//list[0]로 접근하였을때는 배열의 첫번째 공간에 저장된 값이 출력된다.
	printf("address of list[0]       =%p\n",&list[0]);//&list[0]로 접근하였을때는 &연산자로 인해 배열의 첫번째 공간의 주소값이 출력된다.
	printf("value of list            =%p\n",list);//list로 접근하였을때는 배열의 첫번째 공간의 주소값이 출력된다.
	printf("address of list (&list)) =%p\n",&list);//&list로 접근하였을때는 배열의 첫번째 공간의 주소값이 출력된다. 즉, 배열의 이름은 배열의 첫번째 공간의 주소값을 나타낸다.

	printf("---------------------------------------\n\n");
	printf("value of list[1]   = %d\n",list[1]);//배열의 두번째 공간에 저장된 값이 출력된다.
	printf("address of list[1] = %p\n",&list[1]);//배열의 두번째 공간의 주소값이 출력된다.
	printf("value of *(list+1) = %d\n",*(list+1));//배열의 두번째 공간에 저장된 값이 출력된다.
	printf("address of list+1  = %p\n",list+1);//배열의 두번째 공간의 주소값이 출력된다.
	//즉, 배열의 이름에 +n 연산을 실행하는 것은 list[n]의 주소값을 나타낸다. 따라서 *(list+1)에서 list+1에 역참조연산을 했을 때 list[1]에 저장된 값이 나온것이다.

	printf("---------------------------------------\n\n");
	printf("value of *plist[0] = %d\n",*plist[0]);//plist[0]에는 동적할당된 공간의 주소값이 저장되어있다. 역참조연산자를 이용하면 해당 주소에 저장된 값 200이 출력된다.
	printf("&plist[0]          = %p\n",&plist[0]);//포인터배열의 첫번째 공간의 주소값이 출력된다.
	printf("&plist             = %p\n",&plist);//포인터배열의 이름을 이용하여 첫번째 공간의 주소값을 출력한다.
	printf("plist              = %p\n",plist);//포인터배열의 이름은 첫번째 공간의 주소값을 나타내기 때문에 첫번째 공간의 주소값이 출력된다.
	printf("plist[0]           = %p\n",plist[0]);//포인터배열의 첫번째 공간에 저장된 주소값이 출력된다.
	printf("plist[1]           = %p\n",plist[1]);//두번째 공간에 저장된 주소값을 출력한다. NULL로 초기화한 이후 다른 주소값을 저장하지 않았기 때문에 NULL값이 나온다.
	printf("plist[2]           = %p\n",plist[2]);//세번째 공간에 저장된 주소값을 출력한다. NULL로 초기화한 이후 다른 주소값을 저장하지 않았기 때문에 NULL값이 나온다.
	printf("plist[3]           = %p\n",plist[3]);//네번째 공간에 저장된 주소값을 출력한다. NULL로 초기화한 이후 다른 주소값을 저장하지 않았기 때문에 NULL값이 나온다.
	printf("plist[4]           = %p\n",plist[4]);//다섯번째 공간에 저장된 주소값을 출력한다. NULL로 초기화한 이후 다른 주소값을 저장하지 않았기 때문에 NULL값이 나온다.

	free(plist[0]);

	return 0;
}
