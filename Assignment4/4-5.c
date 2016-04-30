#include<stdio.h>
int main()
{
 	int i, j, n;
 	 
 	scanf("%d",&n);

 	int b=2*n-1;

 	for(i=1; i<=n; i++)
 	{ 

 		for(j=1; j<=i; j++)
 		{
 			printf("*"); 
 		} 

 		printf("%*c",b,0);

 		for(j=1; j<=i; j++)
 		{
 			printf("*"); 
 		}
 		
 		b-=2;

 		printf("\n"); 
 	} 



	return 0;
}