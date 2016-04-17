#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,n;
	scanf("%d",&a);
	for (n=1; a>=n;)
	{
		n=n*2;
	}
	for (n/=2;n>=1;)
	{	
		if(a-n>=0){
			printf("%c",'1');
			a=a-n;
			n/=2;
		}
		else{
			printf("%c",'0');
			n/=2;
		}
	}
	return 0;
}