// recursion.c : ��� ȣ���� ���� 3~1���� ������� ���α׷�

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

