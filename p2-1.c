#include <stdio.h>
#define MAX_SIZE 100 //��ó�� �������� MAX_SIZE�� 100���� �ٲ��.
float sum(float [], int);//sum�Լ��� ����
float input[MAX_SIZE], answer;//�������� ���� main�Լ��� sum�Լ����� ��� ����Ҽ� �ִ�.
int i;//�������� ����

void main(void)
{
	printf("[----- [������] [2018038031] -----]\n\n");

	for(i=0; i < MAX_SIZE; i++)//�����迭 input�� 0~MAX_SIZE-1�� ���� �����Ѵ�.
		input[i] = i;

	printf("address of input = %p\n", input);//�迭�� �̸��� �迭�� ù��° ������ �ּҰ��� ��Ÿ���� ������ input[0]�� �ּҰ��� ��µȴ�.

	answer = sum(input, MAX_SIZE);//sum�Լ��� �迭input�� MAX_SIZE�� �μ��� �����ϰ� ����answer�� sum�Լ��� ���ϰ��� ����ȴ�.
	printf("The sum is: %f\n", answer);//�迭input�� ��� ���� ���� ���� ��µȴ�.
}

float sum(float list[], int n)// sum�Լ��� ���� - �迭input�� �Ű�����list[]�� �ް� MAX_SIZE�� �Ű�����n���� �޴´�. ���⼭ �迭�� �ּҰ��� �Ѱܹ޴� call by reference�� ������ ���� ����޴� call by value�̴�.
{
	printf("value of list    = %p\n", list);//�ּҰ��� �Ѱܹ޾����Ƿ� input[0]�� �ּҰ��� ��µȴ�.
	printf("address of list  = %p\n\n", &list);//�Ű����� list[]�� �ּҰ��� ��µȴ�. list[]�� �迭input�� �ּҰ��� �޴� �Ű������̱� ������ �迭input�� �ٸ� ������ �����Ѵ�.

	int i;
	float tempsum = 0;//���� ������ ���� ����
	for(i = 0; i < n; i++)//�迭input�� ��� ���� ���Ѵ�.
		tempsum += list[i];
	return tempsum;//�迭input�� ��� ���� ���� �����Ѵ�.
}
