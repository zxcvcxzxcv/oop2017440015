#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num%2==0)
		printf("%d�� ¦���̴�. \n", num);
	else if (num%2==1)
		printf("%d�� Ȧ���̴�. \n", num);

	return 0;
}