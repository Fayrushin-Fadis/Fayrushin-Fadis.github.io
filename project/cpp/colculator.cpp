#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	short YesOrNo = 1; // Начинает новые вычисления или выходит из программы
	do {
	// Объявление и очищение переменных
	int num1 = 0;
	int num2 = 0;
	short OPERATOR = 0;
	
	// Инициализация переменных пользовательскими значениями
	cout << "-----------------" << endl;
	cout << "|  " << "Калькулятор" << "  |" << endl;
	cout << "-----------------" << endl;
	cout << "\nВведи два числа!" << endl;
	cout << "Первое число: "; cin >> num1;
	cout << "Второе число: "; cin >> num2;
	
	// Вычисления
	do {
	cout << "\n[1 (Сложение), 2 (Вычитание), 3 (Умножение), 4 (Деление)]" << endl;
	cout << "Действие: "; cin >> OPERATOR;
	
	switch (OPERATOR)
	{
		case 1:
			cout << "Итог сложения: " << num1 + num2 << endl;
			break;
		case 2:
			cout << "Итог вычитания: " << num1 - num2 << endl;
			break;
		case 3:
			cout << "Итог умножения: " << num1 * num2 << endl;
			break;
		case 4:
			cout << "Итог деления: " << num1 / num2 << endl;
			break;
		default:
			cout << "Неправильное действие!" << endl;
			break;
	} 
	} while (OPERATOR > 4 || OPERATOR < 1);
	
	// Тут работает переменная YesOrNo, которая спрашивает пользователя о новом вычислении или закрытии программы.
	do {
	cout << "\nХотите продолжить вычисления? [1 (Да), 2 (Нет)]: ";
	cin >> YesOrNo;
	} while (YesOrNo > 2 || YesOrNo < 1);
	
	// Если пользователь откозался от нового вычисления, то программа завершает работу.
	if (YesOrNo == 2)
		exit(0);
	else
		cout << endl;
	} while (YesOrNo == 1);
	
	system("pause");
	return 0;
}
