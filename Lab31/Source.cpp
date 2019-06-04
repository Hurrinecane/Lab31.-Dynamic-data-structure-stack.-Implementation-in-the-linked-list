/*
3.	������ ��������� ����� � �������� ��� ����� � ����.
������� �����, � �������� ����� ���� � �������� �������.
����� �� ������ ����� ��������� ���������� (��������, � ������� getch()).
����������, ����� ��, ��� �����, ������� �� �������� �������� �������� �������, � �� ������ �������� � ���������.
*/

#include "Stack.h"

int main()
{
	Stack*top = nullptr;
	char tmp;
	do
	{
		tmp = _getch();
		if (tmp != '\x1b' && (tmp > 47 && tmp < 58))
			top = Push(top, tmp);
	} while (tmp != '\x1b' || (tmp > 47 && tmp < 58));

	OnScreen(top);

	if (Check(top)) printf_s("True");
	else printf_s("False");

	_getch();

	Clear(top);
}