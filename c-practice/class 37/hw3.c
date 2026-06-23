//
// Created by ayushmannag on 6/21/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	FILE *fp;
	fp = fopen("hw3.txt", "w");
	if (fp == NULL) {
		printf("Can't open file");
		return 1;
	}
	int num1;
	int num2;
	int num3;
	fprintf(fp, "%d%d%d \n", 5, 10, 15);
	fclose(fp);
	fp = fopen("hw3.txt", "r");
	fscanf(fp, "%d", &num1);
	fscanf(fp, "%d", &num2);
	fscanf(fp, "%d", &num3);
	fclose(fp);
	int result = num1 + num2 + num3;
	printf("%d", result);

	return 0;
}