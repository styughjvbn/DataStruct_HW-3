#include <stdio.h>

void print1(int*,int);//print1�Լ��� ����

int main(){
	int one[] = {0, 1, 2, 3, 4};//���� 5���� ������ �� �ִ� �迭�� ����� �Բ� �ʱ�ȭ

	printf("[----- [������] [2018038031] -----]\n\n");

	printf("one     = %p\n",one);//�迭�� �̸��� �迭�� ù��° ������ �ּҰ��� ��Ÿ����. one[0]�� �ּҰ��� ��µȴ�.
	printf("&one    = %p\n",&one);//one[0]�� �ּҰ��� ��µȴ�.
	printf("&one[0] = %p\n",&one[0]);//one[0]�� �ּҰ��� ��µȴ�.
	printf("\n");

	print1(&one[0], 5);//print1�Լ��� one�迭�� ù��° ������ �ּҰ��� ���� 5�� �μ��� �����Ͽ� ȣ���Ѵ�.

	return 0;
}

void print1 (int *ptr, int rows)//ptr�� call by reference�̰� rows�� call by value�̴�.
{
	int i;
	printf ("Address \t Contents\n");
	for (i = 0; i < rows; i++)//�迭�� ���� �ּҰ����� ����Ѵ�.
		printf("%p \t  %5d\n", ptr + i, *(ptr + i));
	/*ptr�� �迭one�� ù��° ������ �ּҰ��� �����ϰ� �ִ�. �����������Ϳ� +n������ �ϴ� ���� (ptr�� ����� �ּҰ�)+n*sizeof(int)�� ����
	���� ptr�� +n������ �ϴ� ���� ptr[n]�� ��Ÿ���� ���̰� �̴� one[n]�� ��Ÿ���� �Ͱ� ����.*/
	printf("\n");
}
