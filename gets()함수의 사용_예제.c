// gets() 함수의 사용

#include <stdio.h>

void main (void)
{
	char s[50];
	printf("문자열 입력?");
	gets(s);
	printf("gets()로 문자열 입력 = %s \n", s);
	printf("문자열 입력?");
	scanf("%s", s);
	printf("scanf()로 문자열 입력 = %s \n", s);
}

