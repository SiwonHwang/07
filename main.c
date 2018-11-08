#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap (int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
		
	return;
}


int main(void){
	
	int x=48;
	int y=85;
	
	printf("x = %i, ", x);
	printf("y = %i\n", y);
	
	swap(&x, &y);
	
	printf("x = %i, ", x);
	printf("y = %i\n", y);
	
	return 0;
} 

