// struct1.c : 구조체를 사용하는 프로그램

#include <stdio.h>
#include <string.h>

struct tagBooks
{
	char books[50]; // 도서명을 저장할 배열 변수
	char press[30]; // 출판사를 저장할 배열 변수
	int price; 		// 판매 가격을 저장할 변수
};  // 세미콜론을 반드시 사용해야 합니다.

void main (void)
{
	struct tagBooks BOOK, BOOK2;
	
	strcpy( BOOK.books, "C 언어 길라잡이");
	strcpy( BOOK.press, "정보문화사");
	BOOK.price = 20000;
	
	BOOK2 = BOOK;
	
	printf("도서명 : %s \n", BOOK2.books); //BOOK2 를 사용
	printf("출판사 : %s \n", BOOK2.press); 
	printf("가  격 : %d \n", BOOK2.price);
	
}


