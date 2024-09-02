// Sum of numbers:

#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    cout << "Sum is: " << sum(num);
}
int sum(int a)
{
    if(a==0)
    {
        return a;
    }
    else
    {
        return a + sum(a-1);
    }
}