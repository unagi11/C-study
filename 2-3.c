#include<stdio.h>

void output();//선언부

int main(){
	int a=input();
	output(a);
	return 0;
}

int input()
{
	int a;
	printf("정수를 입력해 주세요 : ");
	scanf("%d",&a);
	return a;
}

void output(int a)
{
	printf("2배한 값은 %d 입니다.\n",a*2 );
	printf("제곱한 값은 %d 입니다.\n",a*a );
}