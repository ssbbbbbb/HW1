#include <stdio.h>
#include <stdlib.h>

int main()
{
	float kg, m,BMI;
	printf("please enter your weight(kg) and height(m):\n");
	scanf("%f %f", &kg, &m);
	printf("BMI=%.1f\n", kg / (m * m));
	BMI = kg / (m * m);
	if (BMI < 18.5)
		printf("Underweight\n");
	if (BMI >= 18.5 && BMI <= 24.9)
		printf("Normal\n");
	if(BMI >= 25 && BMI <= 29.9)
		printf("Overweight\n");
	if (BMI > 30)
		printf("Obese\n");
	system("pause");
	return 0;
}
