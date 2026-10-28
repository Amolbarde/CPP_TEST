#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear;
    int size;

public:

    Queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool is_empty()
    {
        return front == -1;
    }

    bool is_full()
    {
        return rear == size - 1;
    }

    void push(int x)
    {
        if(is_full())
        {
            cout << "\nQueue is overflow\n";
            return;
        }

        if(is_empty())
        {
            front = rear = 0;
        }
        else
        {
            rear = rear + 1;
        }

        arr[rear] = x;

        cout << "\nPush " << x << " into queue\n";
    }

    void pop()
    {
        if(is_empty())
        {
            cout << "\nQueue is underflow\n";
            return;
        }

        cout << "\nPop " << arr[front] << " from queue\n";

        if(front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = front + 1;
        }
    }

    void top()
    {
        if(is_empty())
        {
            cout << "\nQueue is underflow\n";
            return;
        }

        cout << "\nTOP: " << arr[front] << endl;
    }
};

int main()
{
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    q.top();

    q.pop();
    q.top();

    q.pop();
    q.top();

    return 0;
}