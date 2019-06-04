
#include "Stack.h"

struct Stack;

Stack* Push(Stack*top, char symbol)
{
	Stack* tmp = (Stack*)malloc(sizeof(Stack));
	tmp->symbol = symbol;
	if (top == nullptr)
	{
		top = tmp;
		tmp->next = nullptr;
		top->n = 0;
	}
	else
	{
		tmp->next = top;
		tmp->n = tmp->next->n + 1;
		top = tmp;
	}
	return top;
}

char Pop(Stack*top)
{
	char tmp = top->symbol;
	free(top);
	top = top->next;
	return tmp;
}

void OnScreen(Stack*top)
{
	for (Stack *i = top; i != nullptr; i = i->next)
		printf_s("%d_%c\n", i->n, i->symbol);
}

void Clear(Stack* top)
{
	Stack*tmp;
	if (top != nullptr)
	{
		while (top->next != nullptr)
		{
			tmp = top->next;
			free(top);
			top = tmp;
		}
		free(top);
	}
}
bool Check(Stack*top)
{//ќпределить, верно ли, что цифры, сто€щие на нечетных позици€х €вл€ютс€ четными, а на четных позици€х Ц нечетными.
	for (Stack *i = top; i != nullptr; i = i->next)
		if ((i->n % 2 == 0 && i->symbol %2 == 0) || (i->n % 2 != 0 && i->symbol % 2 != 0)) return false; 
	return true;
}