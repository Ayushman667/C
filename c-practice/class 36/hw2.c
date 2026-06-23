//
// Created by ayushmannag on 6/12/26.
//
#include <stdio.h>
#include <string.h>

struct book {
	char title[50];
	int price;
};

void discount(struct book *b) {
	b->price=b->price - 0.2*b->price;
}

int main() {
	struct book b;
	b.price=200;
	discount(&b);
	printf("The final price of the book is: %d", b.price);

	return 0;
}