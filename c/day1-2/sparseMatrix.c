#include <stdio.h>
int main() {
    static int MAX_SIZE = 10;
    int matrix[MAX_SIZE][MAX_SIZE];
    int ctr = 0;
    int r,c;
    printf("Enter the rows of the matrix:\n");
    scanf("%d", &r);
    printf("Enter the columns of the matrix:\n");
    scanf("%d", &c);
    printf("Enter array elements:\n");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0){
                ctr++;
            }
        }
    }
    if (ctr > ((r*c)/2)){
        printf("Sparse\n");
    } else{
        printf("Not Sparse\n");
    }

    return 0;
}