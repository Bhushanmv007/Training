/* Queue Array Impli:
FIFO enqueue()push, dequeue()pop, peek()Top, empty()
*/

#include<iostream>
using namespace std;

#define n 20

class Queue
{
    int * arr;
    int front;
    int back;

    public:
    Queue()
    {
        arr = new int[n];  //assigning memory to array
        front =-1;
        back = -1;
    }

    void push(int x)
    {
        if(back==n-1)
        {
            cout << "Queue is Overflown" << endl;
            return;
        }
        back++;
        arr[back]=x; //inserting the values at the back

        if(front==-1)
        {
            front++; //this will happen only once to set the front
        }
    }

    void pop()
    {
        if(front==-1 || front>back)
        {
            cout << "No elements in Queue" << endl;
            return;
        }
        front++;
    }

    int peek() //this will return the top most element
    {
        if(front==-1 || front>back)
        {
            cout << "No elements in Queue" << endl;
            return -1;
        } 
        return arr[front];
    }

    bool empty()
    {
        if(front==-1 || front>back)
        {
            return true;
        } 
        return false;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.empty() << endl;

}