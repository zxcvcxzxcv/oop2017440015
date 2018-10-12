#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num%2==0)
		printf("%d는 짝수이다. \n", num);
	else if (num%2==1)
		printf("%d는 홀수이다. \n", num);

	return 0;
}