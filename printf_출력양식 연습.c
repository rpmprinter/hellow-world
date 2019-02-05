// 출력 양식의 편집

#include <stdio.h>
void main (void)
{
	printf("|%d| \n", 123);
	printf("|%5d| \n", 123);
	printf("|%-5d| \n", 123);
	printf("|%05d| \n", 123);
	printf("|%6.1f| \n", 123.45);
	printf("|%07.2f| \n", 123.45);
}

