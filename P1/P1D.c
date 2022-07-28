#include <stdio.h>

int half(int x)
{
	return x == 0 ? 0 : x - 1 == 0 ? 0 : half(x - 2) + 1;
}

int main(void)
{
// Input:
	int x;
	scanf("%d", &x);
// Output:
	int y = half(x);
	printf("%d\n", y);
	return 0;
}