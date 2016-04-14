#include<stdio.h>
void output();

int main(void){
	printf("두정수의 합,차,곱,몫,나머지를 알려드리겠습니다.\n");
	int a=input(), b=input();
	output(a,b);
	return 0;
}

int input()
{
	int n;
	printf("정수를 입력해 주세요");
	scanf("%d",&n);
	return n;
}

void output(int a, int b)
{
	printf("a+b = %d\n",a+b);
	printf("a-b = %d\n",a-b);
	printf("a*b = %d\n",a*b);
	printf("a/b = %d\n",a/b);
	printf("a%%b = %d\n",a%b);
}