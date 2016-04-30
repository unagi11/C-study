#include<stdio.h>
#include<math.h>

int main()
{
	
 	int x, y, n=-2;
 	 
 	for(x=-4; x<=4; x=x+2)
 	{ 

 		printf("%*c",abs(n)+1, ' ');
 		n++;
 		
 		for(y=-5; y*y>x*x; y++)
 		{
 			printf("*"); 
 			
 		} 
 		
 		printf("\n"); 
 	} 



	return 0;
}