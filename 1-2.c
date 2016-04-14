#include<stdio.h>
int main(){
int cho;//전체초입니다.
printf("초를 입력해 주세요");
scanf("%d",&cho);
int shigan=cho/3600;//초를 3600으로 나누어 시간단위로 잘라줍니다. 
int bun=(cho-shigan*3600)/60;//자른 시간단위를 뺀 나머지를 분단위로 잘라줍니다.
cho=cho-(shigan*3600+bun*60);//시간과 분을 뺀 나머지 초를 만들어줍니다.
printf("%d시간 %d분 %d초입니다.",shigan,bun,cho);

}
