// struct5.c : ����ü �����͸� �Լ����� ����ϴ� ���α׷�

#include <stdio.h>
#include <string.h>

struct tagBooks
{
	char books[50];
	char press[30];
	int price;
};

void print_struct(struct tagBooks* pBOOK)
{
	printf("������ : %s \n", pBOOK -> books);
	printf("���ǻ� : %s \n", pBOOK -> press);
	printf("��  �� : %d \n", pBOOK -> price);
	
	pBOOK -> price =15000; //�Ǹ� ������ ����
}

void main(void)
{
	struct tagBooks BOOK;
	
	strcpy(BOOK.books, "C ��� �������");
	strcpy(BOOK.press, "������ȭ��");
	BOOK.price = 20000;
	
	print_struct(&BOOK);
	
	printf("������ : %s \n", BOOK.books);
	printf("���ǻ� : %s \n", BOOK.press);
	printf("��  �� : %d \n", BOOK.price);
}

