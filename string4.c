// sring4.c : 포인터 연산을 이용한 문자열 길이를 구하는 프로그램

#include <stdio.h>

int string_length(char* pstr)
{
	int len = 0;
	
	while(*pstr++)
	{
		len++;
	}
	
	return len; 
}

void main (void)
{
	int len;
	len = string_length("info book");
	printf("길이: %d \n", len);
}

