// sring4.c : ������ ������ �̿��� ���ڿ� ���̸� ���ϴ� ���α׷�

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
	printf("����: %d \n", len);
}

