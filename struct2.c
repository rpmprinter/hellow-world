// struct2.c : ����ü���� �����͸� ����ϴ� ���α׷�

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct
{
	char* name; // ������ ������ ����
	int age;
} SR;

void main (void)
{
	SR.name = (char*) malloc(30);
	
	strcpy(SR.name, "������");
	SR.age = 16;
	
	printf("�̸� : %s \n", SR.name);
	printf("���� : %d \n", SR.age);
	
	free(SR.name);
}

