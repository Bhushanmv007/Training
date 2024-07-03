// practical application of binary search for finding the sqrt of number using binary search
#include<stdio.h>
int binarySearchSqRoot(int n){
      int s = 0;
      int e = n;
      int mid = s + (e-s)/2;
      int ans=-1;
      while (s <= e){
            int sq=mid * mid;
            if(sq==n){
                  return mid;
            }
            else if(sq<n){
                  ans = mid;
                  s = mid + 1;
            }
            else{
                  e=mid-1;
            }
            mid=s + (e-s)/2;
      }
      return ans;
}
int main(){
      int n;
      printf("Enter the number:\n");
      scanf("%d", &n);
      int sqRoot = binarySearchSqRoot(n);
      printf("The square root of %d is %d",n, sqRoot);
      return 0;      
}