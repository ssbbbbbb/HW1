#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	scanf("%d", &x);
	if (x % 2 == 1)
	{
		printf("odd\n");
	}
	if (x % 2 == 0)
	{
		printf("even\n");
	}
	system("pause");
	return 0;
}
