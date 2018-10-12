#include <stdio.h>

int main(void)
{
	int num1, num2, num3, max;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2)
	{
		max = num1;
	}
	else
	{
		max = num2;
	}

	if (max < num3)
		printf("가장 큰 정수: %d \n", num3);
	else
		printf("가장 큰 정수: %d \n", max);

	return 0;
}