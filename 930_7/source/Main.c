#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("number   square   cube\n");
	for (int i = 0; i <= 3; i++)
		printf("%d        %d        %d\n", i, i * i, i * i * i);
	for (int i = 4; i <= 9; i++)
		printf("%d        %d       %d\n", i, i * i, i * i * i);
	printf("%d       %d      %d\n", 10, 10 * 10, 10 * 10 * 10);
	system("pause");
	return 0;
}
