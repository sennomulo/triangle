/*
������ϰ�����㲢��������ε��ܳ������
������Ա������Դ2020300002043
����ʱ�䣺2021.7.8
*/
#include"triangle.h"

int main(void)
{
	float a, b, c;

	printf("����������ʵ����\n");
	scanf("%f%f%f",&a, &b, &c);
	printf("�����ε��ܳ�Ϊ��%f\n",perimeter(a, b, c));
	printf("�����ε����Ϊ��%f\n",area(a, b, c));

	system("pause");
	return 0;
}