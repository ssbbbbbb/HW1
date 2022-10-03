#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, d, e;
	float b, c;
	printf("請輸入一整天的里程數、汽油一公升/加侖多少錢、平均一公升/加侖能行駛多少公里、一天的停車費、一天的通行費(過路費)\n");
	scanf("%d %f %f %d %d", &a, &b, &c, &d, &e);
	float x;
	x = a / c * b + d + e;
	printf("總共費用為:%.2f\n", x);
	system("pause");
	return 0;
}
