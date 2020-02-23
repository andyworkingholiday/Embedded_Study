#include <stdio.h>
#include <stdlib.h>

int glob;

int main() {
	
	int local, *dynamic;
	dynamic= malloc(1383);

	printf("Local = %p\n", &local);
	printf("Dynamic = %p\n", &dynamic);
	printf("Global = %p\n", &glob);
	printf("main = %p\n", main);

	return 0;

}
