#include <stdio.h>

int main(void)
{
	int num1, num2;
printf("두 개의 정수 입력: ");
scanf_s("%d %d", &num1, &num2);

if (num1 > num2)
printf("%d \n", num1);

else
printf("%d \n", num2);

return 0;
}