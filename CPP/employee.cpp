#include<iostream>
using namespace std;

class Node
{
public:
    int id;
    string name;
    float sal;
    Node* next;

    Node(int i, string n, float s)
    {
        id = i;
        name = n;
        sal = s;
        next = NULL;
    }
};


class emp
{
    Node* head;

public:

    emp()
    {
        head = NULL;
    }


    // Insert at Beginning
    void insertBeg()
    {
        int id;
        string nm;
        float sal;

        cout << "Enter id : ";
        cin >> id;

        cout << "Enter name : ";
        cin >> nm;

        cout << "Enter salary : ";
        cin >> sal;

        Node* newNode = new Node(id, nm, sal);

        newNode->next = head;
        head = newNode;

        cout << "Employee inserted\n";
    }


    // Insert at End
    void insertEnd()
    {
        int id;
        string nm;
        float sal;

        cout << "Enter id : ";
        cin >> id;

        cout << "Enter name : ";
        cin >> nm;

        cout << "Enter salary : ";
        cin >> sal;

        Node* newNode = new Node(id, nm, sal);

        if(head == NULL)
        {
            head = newNode;
            return;
        }

        Node* temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;

        cout << "Employee inserted\n";
    }


    // Delete Employee
    void deleteEmp()
    {
        int id;

        cout << "\nEnter id to delete : ";
        cin >> id;

        if(head == NULL)
        {
            cout << "List is empty!!\n";
            return;
        }

        // Delete first node
        if(head->id == id)
        {
            Node* temp = head;

            head = head->next;

            delete temp;

            cout << "\nEmployee deleted...\n";
            return;
        }

        Node* temp = head;

        while(temp->next != NULL && temp->next->id != id)
        {
            temp = temp->next;
        }

        if(temp->next == NULL)
        {
            cout << "Employee not found\n";
            return;
        }

        Node* del = temp->next;

        temp->next = del->next;

        delete del;

        cout << "\nEmployee deleted...\n";
    }


    // Search Employee
    void SearchEmp()
    {
        int id;

        cout << "Enter id to search : ";
        cin >> id;

        if(head == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        while(temp != NULL)
        {
            if(temp->id == id)
            {
                cout << "\nEmployee found..\n";
                cout << "ID : " << temp->id << endl;
                cout << "Name : " << temp->name << endl;
                cout << "Salary : " << temp->sal << endl;

                return;
            }

            temp = temp->next;
        }

        cout << "Employee not found..\n";
    }


    // Display Employees
    void disp()
    {
        if(head == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        while(temp != NULL)
        {
            cout << "\nID : " << temp->id;
            cout << "\nName : " << temp->name;
            cout << "\nSalary : " << temp->sal << endl;

            temp = temp->next;
        }
    }
};


int main()
{
    emp e;
    int choice;

    do
    {
        cout << "\n===== Employee Management =====\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete Employee\n";
        cout << "4. Search Employee\n";
        cout << "5. Display Employees\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                e.insertBeg();
                break;

            case 2:
                e.insertEnd();
                break;

            case 3:
                e.deleteEmp();
                break;

            case 4:
                e.SearchEmp();
                break;

            case 5:
                e.disp();
                break;

            case 6:
                cout << "Exit";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 6);

    return 0;
}