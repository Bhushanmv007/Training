//in the run time we decide the size of the array not in the beginning 
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int * ptr;
    // Use of malloc()
   ptr = (int*)malloc(sizeof(int));
    // use of calloc()
    // ptr = (int*)calloc(n, sizeof(int));
    printf("Enter the array elements:\n");
    for (int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The array elements are:\n");
    for (int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    printf("\nEnter the new size of the array\n");
    scanf("%d", &n);
    realloc(ptr, n * sizeof(int));
    printf("Enter the new elements of the array:\n");
    for (int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The new array elements are:\n");
    for (int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
// in c++ we use new for allocating and delete for deallocating