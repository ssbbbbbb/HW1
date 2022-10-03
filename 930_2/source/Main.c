#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[3], x;
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (a[i] > a[j])
			{
				x = a[j];
				a[j] = a[i];
				a[i] = x;
			}
		}
	}
	printf("Largest is %d ， Smallest is %d\n", a[0], a[2]);
	system("pause");
	return 0;
}
