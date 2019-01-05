// malloc1.c : malloc() 함수를 사용해서 버퍼를 할당받는 프로그램

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

