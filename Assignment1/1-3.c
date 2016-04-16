#include<stdio.h>
#define year 365.2422
int main(){
int h,m,s;//시간 분 초
h = year*24;
m = (year*24-h)*60;
s = (year*24*60-h*60-m)*60;
printf("%f일은 %d시간%d분%d초이다.",year,h,m,s);

return 0;
}
