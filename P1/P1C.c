#include <stdio.h>

int sum(int x, int y)
{
	return y == 0 ? x : sum(x + 1, y - 1);
}

int twice(int x)
{
	return sum(x, x);
}

int main(void)
{
// Input:
	int x;
	scanf("%d", &x);
// Output:
	int y = twice(x);
	printf("%d\n", y);
	return 0;
}