#include<stdio.h>

int input();
void output(int);

int main()
{
	printf("일을 입력하면 주와 일로 바꿔드리겠습니다.\n");
	int Day=input();
	output(Day);
	return 0;
}

int input()
{
	int Day;
	scanf("%d",&Day);
	return Day;
}

void output(int Day)
{
	printf("%d일은 %d주 %d일과 같습니다.",Day,Day/7,Day%7);
}