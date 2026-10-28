#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node* head;
    Node* tail;

public:

    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop_front()
    {
        if(head == NULL)
        {
            cout << "\nList is Empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;

        if(head == NULL)
        {
            tail = NULL;
        }
    }

    void pop_back()
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

        while(temp->next != tail)
        {
            temp = temp->next;
        }

        delete tail;

        tail = temp;
        tail->next = NULL;
    }

    // Insert at position
    void insert_pos(int val, int pos)
    {
        if(pos < 0)
        {
            cout << "\nInvalid position\n";
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
            cout << "\nInvalid position\n";
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        if(newNode->next == NULL)
        {
            tail = newNode;
        }
    }

    // Delete from position
    void delete_pos(int pos)
    {
        if(head == NULL)
        {
            cout << "\nList is Empty\n";
            return;
        }

        if(pos < 0)
        {
            cout << "\nInvalid position\n";
            return;
        }

        // Delete first node
        if(pos == 0)
        {
            pop_front();
            return;
        }

        Node* temp = head;

        for(int i = 0; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        // Invalid position
        if(temp == NULL || temp->next == NULL)
        {
            cout << "\nInvalid position\n";
            return;
        }

        Node* deleteNode = temp->next;

        temp->next = deleteNode->next;

        // If deleting last node
        if(deleteNode == tail)
        {
            tail = temp;
        }

        delete deleteNode;
    }

    int search(int key)
    {
        Node* temp = head;
        int idx = 0;

        while(temp != NULL)
        {
            if(temp->data == key)
            {
                return idx;
            }

            temp = temp->next;
            idx++;
        }

        return -1;
    }

    void disp()
    {
        if(head == NULL)
        {
            cout << "\nList is Empty\n";
            return;
        }

        Node* temp = head;

        cout << "\nLinked List: ";

        while(temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main()
{
    List l;

    int choice;
    int val;
    int pos;
    int key;

    do
    {
        cout << "\n\n===== LINKED LIST MENU =====";
        cout << "\n1. Insert at Front";
        cout << "\n2. Insert at End";
        cout << "\n3. Insert at Position";
        cout << "\n4. Delete from Front";
        cout << "\n5. Delete from End";
        cout << "\n6. Delete from Position";
        cout << "\n7. Search";
        cout << "\n8. Display";
        cout << "\n9. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter value to add: ";
                cin >> val;

                l.push_front(val);
                break;

            case 2:
                cout << "Enter value to add: ";
                cin >> val;

                l.push_back(val);
                break;

            case 3:
                cout << "Enter value to add: ";
                cin >> val;

                cout << "Enter position: ";
                cin >> pos;

                l.insert_pos(val, pos);
                break;

            case 4:
                l.pop_front();
                break;

            case 5:
                l.pop_back();
                break;

            case 6:
                cout << "Enter position to delete: ";
                cin >> pos;

                l.delete_pos(pos);
                break;

            case 7:
                cout << "Enter value to search: ";
                cin >> key;

                pos = l.search(key);

                if(pos == -1)
                    cout << "Value not found\n";
                else
                    cout << "Value found at index: " << pos << endl;

                break;

            case 8:
                l.disp();
                break;

            case 9:
                cout << "\nProgram Exit...\n";
                break;

            default:
                cout << "\nInvalid Choice\n";
        }

    } while(choice != 9);

    return 0;
}