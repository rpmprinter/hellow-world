// struct1.c : ����ü�� ����ϴ� ���α׷�

#include <stdio.h>
#include <string.h>

struct tagBooks
{
	char books[50]; // �������� ������ �迭 ����
	char press[30]; // ���ǻ縦 ������ �迭 ����
	int price; 		// �Ǹ� ������ ������ ����
};  // �����ݷ��� �ݵ�� ����ؾ� �մϴ�.

void main (void)
{
	struct tagBooks BOOK, BOOK2;
	
	strcpy( BOOK.books, "C ��� �������");
	strcpy( BOOK.press, "������ȭ��");
	BOOK.price = 20000;
	
	BOOK2 = BOOK;
	
	printf("������ : %s \n", BOOK2.books); //BOOK2 �� ���
	printf("���ǻ� : %s \n", BOOK2.press); 
	printf("��  �� : %d \n", BOOK2.price);
	
}


