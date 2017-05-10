#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

long double ap, op;

template<typename T>
void ras()
{
	T x, y, y1, y2;
	int key = 1;
	while (key == 1)
	{
		printf("������� x ��� ��������� y = sin^2(x) + cos^2(x)\n");
		cin >> x;
		y1 = sin(x);
		y2 = cos(x);
		printf("y1 = %20.16f\n", y1);
		printf("y2 = %20.16f\n", y1);
		y1 *= y1;
		y2 *= y2;
		y = y1 + y2;;
		printf("y = y1^2 + y2^2 = %20.16f\n", y);
		ap = fabsl(1 - y);
		op = ap / fabs(1.0);
		printf("����������� ���������� %20.16f\n", ap);
		printf("����������� ������������� %20.16f\n", op);
		printf("���������� �������?(1-��)\n");
		cin >> key;
	}
}

int main()
{
	setlocale(0, "rus");
	ras<double>();
	return 0;
}