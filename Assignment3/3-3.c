#include<stdio.h>
#include<string.h>
int main()
{
	char ary[20];
	scanf("%s",&ary);
	int L=strlen(ary);
	printf("%*s\n",L*3/2,ary);
	printf("%-*s\n",L*3/2,ary);
	return 0;
}