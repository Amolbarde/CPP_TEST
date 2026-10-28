#include<iostream>
using namespace std;

class PriorityQueue
{
    int arr[5];
    int size;

public:

    PriorityQueue()
    {
        size = 0;
    }

    // INSERT
    void enqueue(int value)
    {
        if(size == 5)
        {
            cout << "Queue is full\n";
            return;
        }

        arr[size] = value;
        size++;
    }

    // DELETE HIGHEST PRIORITY
    void dequeue()
    {
        if(size == 0)
        {
            cout << "Queue is empty\n";
            return;
        }

        // Find highest priority
        int maxIndex = 0;

        for(int i = 1; i < size; i++)
        {
            if(arr[i] > arr[maxIndex])
            {
                maxIndex = i;
            }
        }

        cout << "Deleted: " << arr[maxIndex] << endl;

        // Shift elements left
        for(int i = maxIndex; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    // PEEK
    void peek()
    {
        if(size == 0)
        {
            cout << "Queue is empty\n";
            return;
        }

        int maxIndex = 0;

        for(int i = 1; i < size; i++)
        {
            if(arr[i] > arr[maxIndex])
            {
                maxIndex = i;
            }
        }

        cout << "Highest Priority: " << arr[maxIndex] << endl;
    }

    // DISPLAY
    void display()
    {
        if(size == 0)
        {
            cout << "Queue is empty\n";
            return;
        }

        for(int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    PriorityQueue q;

    q.enqueue(30);
    q.enqueue(10);
    q.enqueue(50);
    q.enqueue(20);

    q.display();

    q.peek();

    q.dequeue();

    q.display();

    q.dequeue();

    q.display();

    return 0;
}
