// malloc1.c : malloc() �Լ��� ����ؼ� ���۸� �Ҵ�޴� ���α׷�

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main (void)
{
	char* p = malloc(1);
	
	*p = 'm'
	printf("%c \n", *p);
	
	free(p);
	
}

