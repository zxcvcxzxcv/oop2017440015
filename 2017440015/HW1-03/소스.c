#include <stdio.h>

int main(void)
{
	int num1, num2, num3, max;
	printf("�� ���� ���� �Է�: ");
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
		printf("���� ū ����: %d \n", num3);
	else
		printf("���� ū ����: %d \n", max);

	return 0;
}