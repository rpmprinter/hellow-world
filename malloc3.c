// malloc3.c : malloc() �Լ��� ����ؼ� ������ �迭�� �Ҵ�޴� ���α׷�

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
	typedef int (*parray) [3][4];
	
	parray p; // int(*p)[3][4]�� ����
	p = (parray) malloc(4*2*3*4); //int array[2][3][4]
	
	p[0][0][0] = 5;
	p[1][2][3] = 7;
	printf("%d \n", p[0][0][0] + p[1][2][3]);
	
	free(p);
}

