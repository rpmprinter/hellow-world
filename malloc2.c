// malloc2.c : malloc() 함수를 사용해서 정수형 배열을 할당받는 프로그램

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
	int i;
	int* parray = (int*) malloc(sizeof(int)*100); // int array[100]
	for (i = 0 ; i<100 ; i++)
	{
		parray[i] = i;
	}
	
	for (i = 0; i<100; i++)
	{
		printf("%d \n", parray[i] );
	}
	
	free(parray);
}

