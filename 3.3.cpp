// Lab_03_3.cpp
// < ����� ���� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// ������������ � ������ ����
	if (x <= -8 - R)
		y = -R;
	else
		if (-8 - R < x && x <= -8 + R)
			y = R + sqrt(-R - pow((x + 8), 2));
		else
			if (-8 + R < x && x <= 2)
				y = -R + ((2 + R) / (10 + R)) * (x + 8 + R);
			else
				if (2 < x && x <= 6)
					y = 0;
				else
					y = pow((x-6), 2);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}