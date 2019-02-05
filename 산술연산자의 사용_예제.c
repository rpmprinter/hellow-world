// 산술 연산자의 사용

#include <stdio.h>

void main(void)
{
	int x, y;
	x = 10;
	y = 3;
	printf("x+y = %d\n", x+y);
	printf("x/y = %d\n", x/y);
	printf("x%%y = %d\n", x%y);  // %문자를 출력하기 위해 %문자를 2개 연속 사용
	printf("y%%x = %d\n", y%x);
}

