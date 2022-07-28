#include <stdio.h>

int sum_squares(int n)
{
	return (n * (n + 1) * (2 * n + 1)) / 6;
}

int sum_squares_from_to(int x, int y)
{
	return sum_squares(y) - sum_squares(x - 1);
}

int main(void)
{
// Input:
	int x;
	int y;
	scanf("%d%d", &x, &y);
// Output:
	int z = sum_squares_from_to(x, y);
	printf("%d\n", z);
	return 0;
}