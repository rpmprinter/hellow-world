// malloc3.c : malloc() 함수를 사용해서 정수형 배열을 할당받는 프로그램

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
	typedef int (*parray) [3][4];
	
	parray p; // int(*p)[3][4]와 동일
	p = (parray) malloc(4*2*3*4); //int array[2][3][4]
	
	p[0][0][0] = 5;
	p[1][2][3] = 7;
	printf("%d \n", p[0][0][0] + p[1][2][3]);
	
	free(p);
}

