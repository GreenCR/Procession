#include <stdio.h>
int left = 1;
int central = 0;
int right = 0;
void swap(int* n1, int* n2);
void fun(int* inpt);
int main()
{
	int input;
	printf("/\\   /\\   /\\ \n");
	printf("^\n");
	printf("0 - swap left and right\n");
	printf("1 - swap right and central\n");
	printf("2 - swap left and right\n");
	scanf_s("%d", &input);
	fun(input);
}
void swap(int* n1, int* n2)
{
	int tmp = *n2;
	*n2 = *n1;
	*n1 = tmp;
}
void fun(int* inpt)
{
	while ((inpt == 0) || (inpt == 1) || (inpt == 2))
	{
		if (inpt == 0) swap(&left, &central);
		if (inpt == 1) swap(&right, &central);
		if (inpt == 2) swap(&left, &right);
		scanf_s("%d", &inpt);
	}
	if (left == 1)
	{
		printf("/\\   /\\   /\\ \n");
		printf("^");
	}
	if (central == 1)
	{
		printf("/\\   /\\   /\\ \n");
		printf("     ^");
	};
	if (right == 1)
	{
		printf("/\\   /\\   /\\ \n");
		printf("          ^");
	};
}