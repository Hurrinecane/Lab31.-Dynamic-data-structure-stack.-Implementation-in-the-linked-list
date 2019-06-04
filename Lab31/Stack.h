#pragma once

#include <conio.h> // подключаем getch
#include <iostream> // подключаем printf

struct Stack
{
	char symbol;
	int n;
	Stack* next;
};

Stack* Push(Stack*top, char symbol);
char Pop(Stack*top);
void OnScreen(Stack*top);
void Clear(Stack* top);
bool Check(Stack*top);