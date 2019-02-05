// putchar() 함수의 사용

#include <stdio.h>
void main(void)
{
	char var = 'A';
	putchar(var);
	putchar(var+1);
	putchar('\n');
	putchar('K');
	putchar('K'+2);
	putchar('\007');
}

