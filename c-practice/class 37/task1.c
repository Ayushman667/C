//
// Created by ayushmannag on 6/20/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	fp = fopen("numbers.txt", "w");
	fprintf(fp, "%d %d %d", 10, 20, 30);
	fclose(fp);

	return 0;
}