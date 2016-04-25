#include<stdio.h>

void output(int);
void output_2(int);

int main()
{
	int a=input();
	output(a);
	output_2(a);
	return 0;
}

int input()
{
	int a;
	scanf("%d",&a);
	return a;
}

void output(int a)
{

	printf("10진수 : %d\n",a);
	printf("16진수 : %#x\n",a);
	printf("8진수 : %#o\n",a);

}

void output_2(int a)//2진수 출력 함수
{
	int n;
	printf("2진수 : ");
	if (a==0) printf("0");
	else{
	for (n=1; a>=n;)
	{
		n=n*2;
	}
	for (n/=2;n>=1;)
	{	
		if(a-n>=0){
			printf("%c",'1');
			a=a-n;
			n/=2;}
		else{
			printf("%c",'0');
			n/=2;}
	}
	}
}
