#include <stdio.h>
#include <stdbool.h>  
#include <stdint.h>

bool scrivi_intero(const char* filename, int i) {

	FILE* f = fopen(filename, "w");

	if (f == NULL) {

		return false;
	}

	fprintf(f, "%d", i);
	fclose(f);

	return true;
}