//the max regions of a circle 
#include <stdio.h>
int maxRegions(int n){
    int regions = (n * (n + 1))/2 + 1;
    return regions;
}
int main() {
    int n;
    scanf("%d", &n);
    int mRegions = maxRegions(n);
    printf("The max regions for %d straight lines is %d", n, mRegions);
    return 0;
}