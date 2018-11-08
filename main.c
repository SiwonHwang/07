#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i = 365;
	int *ptr = &i;
	
	printf("i address : %i\n", &i);
	printf("i value : %i\n", i);
	
	printf("ptr address : %i\n", ptr);
	printf("ptr value : %i\n", *ptr);
	
	return 0;
}
