// string3.c : 포인터 연산을 이용한 문자열 출력 프로그램

#include <stdio.h>

void print_string(char* pstring)
{
	while(*pstring)
	{
		printf("%c", *pstring);
		pstring++;
	}
	
	printf("\n");
}

void main (void)
{
	char str[] = "info book";
	char* pstr = str; //char* pstr = &str[0];
	
	print_string(str);
	print_string(pstr);
	print_string(&str[0]);
	print_string(&str[5]);
	
	pstr[4] = 0;
	print_string(str);
}

