#include <stdio.h>

int main(void)
{
	int num;
	printf("점수 입력: ");
	scanf_s("%d", &num);

	if (num >= 80)
		printf("A \n");

	else if (num >= 60)
		printf("B \n");

	else if (num >= 40)
		printf("C \n");

	else if (num >= 20)
		printf("D \n");

	else
		printf("E \n");

	return 0;
}
