#include <stdio.h>

struct student{//����ü student ����
	char LastName[13]; //13ũ���� ������ �迭 �̹Ƿ� 13byte
	int stdentID;//������ �����̹Ƿ� 4byte
	short grade;//short�� �����̹Ƿ� 2byte
};

int main(){
	struct student pst;//����ü pst ����

	printf("[----- [������] [2018038031] -----]\n\n");

	printf("size of student = %ld\n",sizeof(struct student));//����ü ����student�� ũ�� 24byte ���
	/*why? ������ �迭�� 13byte+3padding byte, short�� ������ 2byte+2padding byte�� ������ 24byte�� ���
	��, GCC�� �е��� �ϸ� 4����Ʈ�� ä�� �ִ´�. */
	printf("size of int = %ld\n",sizeof(int));//�������� ũ�� 4byte ���
	printf("size of short = %ld\n",sizeof(short));//short�� ũ�� 2byte ���

	return 0;
}
