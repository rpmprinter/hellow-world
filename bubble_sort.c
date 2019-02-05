//bubble_sort.c : 버블 정렬 프로그램

#include <stdio.h>

void main (void)
{
	int n[5] = {7,3,5,9,2};
	int i, j, c = 1;
	
	printf(" %d %d %d %d %d (%d) \n", n[0], n[1], n[2], n[3], n[4], c);
	
	for (i = 0; i<5-1 ; i++)
	{
		for (j = 1; j<5-1 ; j++)
		{
			if(n[j-1] > n[j] )
			{
				int tmp;
				tmp = n[j-1];
				n[j-1] = n[j];
				n[j] = tmp;
			}
		
			printf("%d %d %d %d %d (%d) \n", n[0], n[1], n[2], n[3], n[4], ++c);
		}
	}
}


