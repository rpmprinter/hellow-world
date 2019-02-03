// struct5.c : 구조체 포인터를 함수에서 사용하는 프로그램

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
	printf("도서명 : %s \n", pBOOK -> books);
	printf("출판사 : %s \n", pBOOK -> press);
	printf("가  격 : %d \n", pBOOK -> price);
	
	pBOOK -> price =15000; //판매 가격을 변경
}

void main(void)
{
	struct tagBooks BOOK;
	
	strcpy(BOOK.books, "C 언어 길라잡이");
	strcpy(BOOK.press, "정보문화사");
	BOOK.price = 20000;
	
	print_struct(&BOOK);
	
	printf("도서명 : %s \n", BOOK.books);
	printf("출판사 : %s \n", BOOK.press);
	printf("가  격 : %d \n", BOOK.price);
}

