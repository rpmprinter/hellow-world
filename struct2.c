// struct2.c : 구조체에서 포인터를 사용하는 프로그램

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct
{
	char* name; // 문자형 포인터 선언
	int age;
} SR;

void main (void)
{
	SR.name = (char*) malloc(30);
	
	strcpy(SR.name, "갑돌이");
	SR.age = 16;
	
	printf("이름 : %s \n", SR.name);
	printf("나이 : %d \n", SR.age);
	
	free(SR.name);
}

