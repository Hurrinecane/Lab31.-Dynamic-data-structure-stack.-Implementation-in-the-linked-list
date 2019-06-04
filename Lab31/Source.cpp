/*
3.	¬вести некоторое число и записать его цифры в стек.
¬ывести число, у которого цифры идут в обратном пор€дке.
÷ифры из записи числа считывать поочередно (например, с помощью getch()).
ќпределить, верно ли, что цифры, сто€щие на нечетных позици€х €вл€ютс€ четными, а на четных позици€х Ц нечетными.
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