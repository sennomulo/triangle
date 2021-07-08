/*
课堂练习：计算并输出三角形的周长和面积
开发人员：杨赖源2020300002043
开发时间：2021.7.8
*/
#include"triangle.h"

int main(void)
{
	float a, b, c;

	printf("请输入三个实数：\n");
	scanf("%f%f%f",&a, &b, &c);
	printf("三角形的周长为：%f\n",perimeter(a, b, c));
	printf("三角形的面积为：%f\n",area(a, b, c));

	system("pause");
	return 0;
}