#include <stdio.h>
#include <stdlib.h>

int main(){
	int list[5];//���� 5���� �����Ҽ� �ִ� �迭
	int *plist[5];//������ ������ 5���� ������ �� �ִ� �迭

	printf("[----- [������] [2018038031] -----]\n\n");

	list[0]=10;//�� ����
	list[1]=11;//�� ����

	plist[0]=(int*)malloc(sizeof(int));//������ ������ ������ �����Ҵ��Ͽ� �Ҵ�� ������ �ּҰ��� ������ �迭�� ù��° ������ ����

	printf("list[0] \t        = %d\n",list[0]);//���� �迭 list�� ù��° ������ ����� ���� ��µȴ�.
	printf("address of list \t= %p\n",list);//�迭�� �̸��� �迭�� ù��° ������ �ּҰ��� ��Ÿ���Ƿ� list[0]�� �ּҰ��� ��µȴ�.
	printf("address of list[0] \t= %p\n",&list[0]);//�迭�� ù��° ������ �ּҰ��� ��µȴ�.
	printf("address of list + 0\t= %p\n",list+0);//�迭�� �̸��� +n �����ϴ� �ϴ� ���� list[n]�� �ּҰ��� ��Ÿ���°Ͱ� �����Ƿ� list[0]�� �ּҰ��� ��µȴ�.
	printf("address of list + 1\t= %p\n",list+1);//list[1]�� �ּҰ��� ��µȴ�.
	printf("address of list + 2\t= %p\n",list+2);//list[2]�� �ּҰ��� ��µȴ�.
	printf("address of list + 3\t= %p\n",list+3);//list[3]�� �ּҰ��� ��µȴ�.
	printf("address of list + 4\t= %p\n",list+4);//list[4]�� �ּҰ��� ��µȴ�.
	printf("address of list[4] \t= %p\n",&list[4]);//&�����ڸ� �̿��Ͽ� list[4]�� �ּҰ��� ����Ѵ�. �� �ٰ� ���� ���� ���´�.

	free(plist[0]);
}
