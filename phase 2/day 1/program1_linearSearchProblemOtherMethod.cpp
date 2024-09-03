// Using ARRAYS

#include <iostream>
#include <cstring>

using namespace std;


string arr[100];
int index = 0;

void strtoarr(string s)
{
    int i = 0, j = 0;
    int n = s.length();

    while (j <= n)
    {
        if (s[j] == ',' || j == n)
        {
            arr[index] = s.substr(i, j - i);
            index++;
            i = j + 1;
        }
        j++;
    }
}

int linearsearch(string arr[], int size, string element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i + 1;
    }
    return -1;
}

int main()
{
    string element;
    cout << "Enter the element to be searched: ";
    cin >> element;

    string s = "1234,5678,3643,9876";

    strtoarr(s);

    int pos = linearsearch(arr, index, element);

    if (pos != -1)
        cout << "Element is found at position: " << pos << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}