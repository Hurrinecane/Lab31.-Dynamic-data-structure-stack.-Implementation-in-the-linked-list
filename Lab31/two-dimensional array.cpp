#include "two-dimensional array.h"

int ** CreateMas(int w, int h)
{
	if (!(w > 0 && h > 0)) exit(1);
	int **mas = (int**)malloc(w * sizeof(int));
	for (int i = 0; i < w; i++)
		mas[i] = (int*)malloc(h * sizeof(int));
	return mas;
}

void WriteIn(int w, int h,int **mas)
{
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
			scanf_s("%d", &mas[i][j]);
}

int * Counter(int w, int h, int **mas)
{
	int n = 0;
	int *ctr = (int*)malloc(w * sizeof(int));
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
			if (mas[i][j] < 0) n++;
		ctr[i] = n;
		n = 0;
	}
	return ctr;
}

void PrintOnScreen(int w, int h, int ** mas )
{
	system("cls");
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
			printf_s("%5d ", mas[i][j]);
		}
		printf_s("\n");
	}
}
	void FreeMas(int w, int ** mas)
	{
		for (int i = 0; i < w; i++)
				free(mas[i]);
	}