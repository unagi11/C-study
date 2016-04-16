#include <stdio.h>
int main()
{
int won;
printf("액수를 넣어주세요");
scanf("%d",&won);
printf("\n50000원이 %d개",won/50000);
won%=50000;
printf("\n10000원이 %d개",won/10000);
won%=10000;
printf("\n5000원이 %d개",won/5000);
won%=5000;
printf("\n1000원이 %d개",won/1000);
won%=1000;
printf("\n500원이 %d개",won/500);
won%=500;
printf("\n100원이 %d개",won/100);
won%=100;
printf("\n50원이 %d개",won/50);
won%=50;
printf("\n10원이 %d개",won/10);
won%=10;
printf("으로 나눌수있으며 \n현금으로 받지못하는 돈이 %d원입니다.",won);
return 0;
}
