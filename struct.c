#include <stdio.h>

struct student1{//typedef�� ������� �ʰ� ����ü student1 ����
	char lastName;
	int studentID;
	char grade;
};

typedef struct{//typedef�� ����Ͽ� ����ü student2 ����
	char lastName;
	int studentID;
	char grade;
}student2;

int main(){
	struct student1 st1={'A',100,'A'};//typedef�� ������� �ʾұ� ������ �����Ҷ� 'struct'�� �� ������Ѵ�.

	printf("[----- [������] [2018038031] -----]\n\n");

	printf("st1.lastName = %c\n",st1.lastName);//'.'�����ڸ� �̿��Ͽ� ����ü st1�� lastName����� �����Ͽ� �� ���
	printf("st1.studentID = %d\n",st1.studentID);//'.'�����ڸ� �̿��Ͽ� ����ü st1�� studentID����� �����Ͽ� �� ���
	printf("st1.grade = %c\n",st1.grade);//'.'�����ڸ� �̿��Ͽ� ����ü st1�� grade����� �����Ͽ� �� ���

	student2 st2={'B',200,'B'};//typedef�� ����Ͽ� �����Ͽ��� ������ �����Ҷ� 'struct'�� ���� �ʾƵ� �ȴ�.

	printf("\nst2.lastName = %c\n",st2.lastName);//'.'�����ڸ� �̿��Ͽ� ����ü st2�� lastName����� �����Ͽ� �� ���
	printf("st2.studentID = %d\n",st2.studentID);//'.'�����ڸ� �̿��Ͽ� ����ü st2�� studentID����� �����Ͽ� �� ���
	printf("st2.grade = %c\n",st2.grade);//'.'�����ڸ� �̿��Ͽ� ����ü st2�� grade����� �����Ͽ� �� ���

	student2 st3;//���� �ϰ� �ʱ�ȭ�� ���� �ʴ´�.

	st3=st2;//����ü st3�� st2�� ���� �����Ѵ�. �����Ϸ����� �ٸ��� GCC�� �۵��Ѵ�.

	printf("\nst3.lastName = %c\n",st3.lastName);//'.'�����ڸ� �̿��Ͽ� ����ü st3�� lastName����� �����Ͽ� �� ���, st2�� lastName����� ���� ���� ���� ��µȴ�.
	printf("st3.studentID = %d\n",st3.studentID);//'.'�����ڸ� �̿��Ͽ� ����ü st3�� studentID����� �����Ͽ� �� ���, st2�� studentID����� ���� ���� ���� ��µȴ�.
	printf("st3.grade = %c\n",st3.grade);//'.'�����ڸ� �̿��Ͽ� ����ü st3�� grade����� �����Ͽ� �� ���, st2�� grade����� ���� ���� ���� ��µȴ�.

	/*if(st3==st2)//�̷��� ��� �˻縦 �ϴ� ���� �Ұ����ϸ� ������ ������� �˻縦 �ؾ��Ѵ�.
		printf("equal\n");
	else
		printf("not equal\n");
	*/
}
