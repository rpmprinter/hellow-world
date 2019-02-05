// scanf() 함수의 사용

#include <stdio.h>
void main (void)
{
	int jsu1, jsu2;
	float ssu1, ssu2;
	printf("\n 정수를 입력하시오 : ");
	scanf("%d %d", &jsu1, &jsu2);
	printf("\n 실수를 입력하시오 : ");
	scanf("%f %f", &ssu1, &ssu2);
	printf("\n 정수는 %d %d \n", jsu1, jsu2);
	printf("실수는 %f %f \n", ssu1, ssu2);
}

