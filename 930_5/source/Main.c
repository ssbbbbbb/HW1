#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % b == 0)
		printf("the first is a multiple of the second.\n");
	else
		printf("the first isn't a multiple of the second.\n");
	system("pause");
	return 0;
}
