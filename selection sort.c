// selection.c : 선택 정렬 프로그램

#include <stdio.h>

void main (void)
{
	int n[5] = {5,3,2,8,7}; 
	int i, j, c = 1;
	
	printf("%d %d %d %d %d (%d) \n", n[0], n[1], n[2], n[3], n[4], c);
	
	for (i = 0; i<5-1; i++)
	{
		for (j = i+1; j<5; j++)
		{
			if (n[j] < n[i])
			{
				int tmp;
				tmp = n[j];
				n[j] = n[i];
				n[i] = tmp;
			}
			
			printf("%d %d %d %d %d (%d) \n", n[0], n[1], n[2], n[3], n[4], ++c);
		}
	}
}

	
