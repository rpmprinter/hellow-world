// union.c : 공용체를 사욯한 날짜 출력 프로그램

#include <stdio.h>

union tagDate
{
	char full_date[11]; 
	struct tagPartDate
	{
		char year[4];
		char break1;
		char month[2];
		char break2;
		char day[2];
	}part_date;
}date = {"2006/05/25"};

void main(void)
{
	printf("%d \n", date.full_date);
	printf("%d \n", date.part_date.year);
	
	puts(date.full_date);
	printf("%-4.4s%c-2.2s%c%-2.2s \n", 
		date.part_date.year, 
		date.part_date.break1,
		date.part_date.month, 
		date.part_date.break2,
		date.part_date.day);
}

