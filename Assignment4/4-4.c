#include<stdio.h>

int main()
{
	
 	int x, y; 
 	 
 	for(x=-4; x<=5; x++)
 	{ 

 		for(y=-5; y*y>x*x; y++)
 		{
 			printf("*"); 
 		} 
 		
 		printf("\n"); 
 	} 



	return 0;
}