#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	short YesOrNo = 1; // �������� ����� ���������� ��� ������� �� ���������
	do {
	// ���������� � �������� ����������
	int num1 = 0;
	int num2 = 0;
	short OPERATOR = 0;
	
	// ������������� ���������� ����������������� ����������
	cout << "-----------------" << endl;
	cout << "|  " << "�����������" << "  |" << endl;
	cout << "-----------------" << endl;
	cout << "\n����� ��� �����!" << endl;
	cout << "������ �����: "; cin >> num1;
	cout << "������ �����: "; cin >> num2;
	
	// ����������
	do {
	cout << "\n[1 (��������), 2 (���������), 3 (���������), 4 (�������)]" << endl;
	cout << "��������: "; cin >> OPERATOR;
	
	switch (OPERATOR)
	{
		case 1:
			cout << "���� ��������: " << num1 + num2 << endl;
			break;
		case 2:
			cout << "���� ���������: " << num1 - num2 << endl;
			break;
		case 3:
			cout << "���� ���������: " << num1 * num2 << endl;
			break;
		case 4:
			cout << "���� �������: " << num1 / num2 << endl;
			break;
		default:
			cout << "������������ ��������!" << endl;
			break;
	} 
	} while (OPERATOR > 4 || OPERATOR < 1);
	
	// ��� �������� ���������� YesOrNo, ������� ���������� ������������ � ����� ���������� ��� �������� ���������.
	do {
	cout << "\n������ ���������� ����������? [1 (��), 2 (���)]: ";
	cin >> YesOrNo;
	} while (YesOrNo > 2 || YesOrNo < 1);
	
	// ���� ������������ ��������� �� ������ ����������, �� ��������� ��������� ������.
	if (YesOrNo == 2)
		exit(0);
	else
		cout << endl;
	} while (YesOrNo == 1);
	
	system("pause");
	return 0;
}
