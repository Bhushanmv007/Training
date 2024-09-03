#include <iostream>
using namespace std;
void swapNumbers(int *a, int *b){
      int temp=*a;
      *a=*b;
      *b=temp;
}
void swapLetters(char *c, char *d){
      int temp=*c;
      *c=*d;
      *d=temp;
}
template<typename T>//here T can be anything we use template for swapping anything 
void swapAnything(T& a, T& b){
      T temp=a;
      a=b;
      b=temp;
} 
int main() {
    int a = 10;
    int b = 20;
    char c = 'c';
    char d = 'd';
    cout << "Before swapping a=" << a << " b=" << b
    << endl;
    swapAnything(a,b);
    cout << "After swapping a=" << a << " b=" << b
         << endl;
    cout << "Before swapping c=" << c << " d=" << d
         << endl;
    swapLetters(&c,&d);
    cout << "After swapping c=" << c << " d=" << d
         << endl;
    return 0;
}
#include<algorithm>//has all the algos only available in cpp