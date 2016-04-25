#include<stdio.h>
int main()
{
 	int i, j; 
 	 
 	for(i=1; i<=5; i++)
 	{ 
 		printf("%*c",i,0);
 		
 		for(j=5; j>=i; j--)
 		{
 			printf("*"); 
 		} 
 		
 		printf("\n"); 
 	} 



	return 0;
}