#include <stdio.h>
int main() {
    int a = 10;
    // base address using address operator
    printf("%p\n", &a);
    // hexa address using address operator
    printf("%x\n", &a);
    int * ptr = &a;
    // base address using pointer
    printf("%p\n", ptr);
    // hexa address using pointer
    printf("%x\n", ptr);
    // value of a using pointer
    printf("%d\n", *ptr); // De-referencing
    int ** pp = &ptr;
    // address of pointer using address operator
    printf("%x\n", &ptr);
    // address of pointer using double pointer
    printf("%x\n", pp);
    // value of a using double pointer
    printf("%d\n", **pp);
    printf("%d", *(&a));
    return 0;
}