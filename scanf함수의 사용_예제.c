// scanf() �Լ��� ���

#include <stdio.h>
void main (void)
{
	int jsu1, jsu2;
	float ssu1, ssu2;
	printf("\n ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &jsu1, &jsu2);
	printf("\n �Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f %f", &ssu1, &ssu2);
	printf("\n ������ %d %d \n", jsu1, jsu2);
	printf("�Ǽ��� %f %f \n", ssu1, ssu2);
}

