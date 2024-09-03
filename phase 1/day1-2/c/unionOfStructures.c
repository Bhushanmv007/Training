#include <stdio.h>
#include <string.h>
struct store {
    // Items -> Book & Shirt
    double price;
    union {
        // Book
        struct {
            int num_pages;
            char design[20];
            char author[20];
        } book;
        // Shirt
        struct {
            char color[20];
            char size;
        } shirt;
    }item;
};
int main() {
    struct store p;
    p.price = 250;
    strcpy(p.item.book.design, "EBook");
    strcpy(p.item.book.author, "Denis Richie");
    printf("Size of the book: %llu bytes.", sizeof(p));
    return 0;
}