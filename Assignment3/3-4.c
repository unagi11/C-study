#include<stdio.h>
#include<string.h>

int main()
{
	char first[10],second[10];
	scanf("%s",&first);
	scanf("%s",&second);
	printf("%s %s\n",first,second);
	int Lf=strlen(first), Ls=strlen(second);
	printf("%*d %*d\n",Lf,Lf,Ls,Ls);
	return 0;
}