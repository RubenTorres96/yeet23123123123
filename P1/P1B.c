#include <stdio.h>

int main(void)
{
// Input:
	int x;
	scanf("%d", &x);
// Output:
	int y = 2147483647 / x;
	printf("%d\n", y);
	return 0;
}