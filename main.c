#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int x=10;
	int y=20;
	int *ptr;
	
	ptr = &x;
	printf("ptr value : %i\n", *ptr);
	
	ptr = &y;
	printf("ptr value : %i\n", *ptr);
	
	ptr = &x;
	printf("ptr value : %i\n", *ptr);
	
	*ptr = 20;
	printf("x value : %i\n", x);
	
	return 0;
}
