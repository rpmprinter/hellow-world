// string3.c : ������ ������ �̿��� ���ڿ� ��� ���α׷�

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

