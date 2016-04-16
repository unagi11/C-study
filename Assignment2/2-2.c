#include<stdio.h>

void output();

int main()
{
	int km=input_km();
	int km_h=input_km_h();
	output(km, km_h);
	return 0;
}

int input_km()
{
	int km;
	printf("주행거리를 입력해 주세요(km) ");
	scanf("%d",&km);
	return km;
}

int input_km_h()
{
	int km_h;
	printf("\n시속을 입력해 주세요(km/h) ");
	scanf("%d",&km_h);
	return km_h;
}

void output(int km, int km_h)
{
	printf("\n%d시",km/km_h);
	float min=60.0*km/km_h;
	printf(" %.0f분",min);
	float sec=(min-km/km_h*60)*60;
	printf(" %.3f초 걸립니다.",sec);
}