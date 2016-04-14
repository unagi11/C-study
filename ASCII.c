#include<stdio.h>

void output(char);
char input();

int main()
{
	printf("입력하신 문자의 ASCII코드를 알려드리겠습니다.\n");
	char a = input();
	output(a);
	return 0;
}

char input()
{
	char a;
	scanf("%c",&a);
	return a;	
}

void output(char a)
{
	printf("%d",a);
}