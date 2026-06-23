//
// Created by ayushmannag on 6/20/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	int num;
	FILE *fp;
	fp = fopen("number.txt", "w");
	fprintf(fp, "%d", 10);
	fclose(fp);
	fp = fopen("number.txt", "r");
	fscanf(fp, "%d", &num);
	printf("%d", num);
	fclose(fp);

	return 0;
}