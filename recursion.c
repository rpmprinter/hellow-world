// recursion.c : 재귀 호출을 통해 3~1까지 출려가는 프로그램

#include <stdio.h>

void print_count(int count)
{
	printf("%d \n", count);
	if (count == 1) return ;
	print_count(--count);
}

void main (void)
{
	print_count(3);
}

