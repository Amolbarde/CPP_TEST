#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class Doubly_list
{
    Node* head;
    Node* tail;

public:

    Doubly_list()
    {
        head = tail = NULL;
    }

    // Insert at Front
    void push_front(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Insert at Back
    void push_back(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    // Delete from Front
    void pop_front()
    {
        if(head == NULL)
        {
            cout << "\nList is Empty\n";
            return;
        }

        if(head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        head = head->next;
        head->prev = NULL;

        temp->next = NULL;
        delete temp;
    }

    // Delete from Back
    void pop_back()
    {
        if(head == NULL)
        {
            cout << "\nList is Empty\n";
            return;
        }

        if(head == tail)
        {
            delete tail;
            head = tail = NULL;
            return;
        }

        Node* temp = tail;

        tail = tail->prev;
        tail->next = NULL;

        temp->prev = NULL;
        delete temp;
    }

    // Insert at Position
    void insert_pos(int val, int pos)
    {
        if(pos < 0)
        {
            cout << "\nInvalid Position\n";
            return;
        }

        if(pos == 0)
        {
            push_front(val);
            return;
        }

        Node* temp = head;

        for(int i = 0; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if(temp == NULL)
        {
            cout << "\nInvalid Position\n";
            return;
        }

        // Insert at end
        if(temp == tail)
        {
            push_back(val);
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        newNode->prev = temp;

        temp->next->prev = newNode;
        temp->next = newNode;
    }

    // Delete from Position
    void delete_pos(int pos)
    {
        if(head == NULL)
        {
            cout << "\nList is Empty\n";
            return;
        }

        if(pos < 0)
        {
            cout << "\nInvalid Position\n";
            return;
        }

        if(pos == 0)
        {
            pop_front();
            return;
        }

        Node* temp = head;

        for(int i = 0; i < pos && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if(temp == NULL)
        {
            cout << "\nInvalid Position\n";
            return;
        }

        if(temp == tail)
        {
            pop_back();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;
    }

    // Search
    int search(int key)
    {
        Node* temp = head;
        int index = 0;

        while(temp != NULL)
        {
            if(temp->data == key)
            {
                return index;
            }

            temp = temp->next;
            index++;
        }

        return -1;
    }

    // Display Forward
    void display_forward()
    {
        if(head == NULL)
        {
            cout << "\nList is Empty\n";
            return;
        }

        Node* temp = head;

        cout << "\nForward: ";

        while(temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    // Display Backward
    void display_backward()
    {
        if(tail == NULL)
        {
            cout << "\nList is Empty\n";
            return;
        }

        Node* temp = tail;

        cout << "\nBackward: ";

        while(temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->prev;
        }

        cout << "NULL\n";
    }
};

int main()
{
    Doubly_list d;

    int choice;
    int val;
    int pos;
    int key;

    do
    {
        cout << "\n\n========== DOUBLY LINKED LIST ==========";
        cout << "\n1. Insert at Front";
        cout << "\n2. Insert at Back";
        cout << "\n3. Insert at Position";
        cout << "\n4. Delete from Front";
        cout << "\n5. Delete from Back";
        cout << "\n6. Delete from Position";
        cout << "\n7. Search";
        cout << "\n8. Display Forward";
        cout << "\n9. Display Backward";
        cout << "\n10. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter value to add: ";
                cin >> val;

                d.push_front(val);
                break;

            case 2:
                cout << "Enter value to add: ";
                cin >> val;

                d.push_back(val);
                break;

            case 3:
                cout << "Enter value to add: ";
                cin >> val;

                cout << "Enter position: ";
                cin >> pos;

                d.insert_pos(val, pos);
                break;

            case 4:
                d.pop_front();
                break;

            case 5:
                d.pop_back();
                break;

            case 6:
                cout << "Enter position to delete: ";
                cin >> pos;

                d.delete_pos(pos);
                break;

            case 7:
                cout << "Enter value to search: ";
                cin >> key;

                pos = d.search(key);

                if(pos == -1)
                    cout << "\nValue not found\n";
                else
                    cout << "\nValue found at index: " << pos << endl;

                break;

            case 8:
                d.display_forward();
                break;

            case 9:
                d.display_backward();
                break;

            case 10:
                cout << "\nProgram Exit...\n";
                break;

            default:
                cout << "\nInvalid Choice\n";
        }

    } while(choice != 10);

    return 0;
}