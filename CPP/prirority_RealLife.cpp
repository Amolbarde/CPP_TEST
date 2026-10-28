#include <iostream>
using namespace std;

class Patient
{
    string patient[10];
    int patientPriority[10];

    int front;
    int rear;

public:

    Patient()
    {
        front = rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return rear == 9;
    }

    void AddPatient(string nm, int pri)
    {
        if(isFull())
        {
            cout << "Number of patients is full. Come Next Day!!" << endl;
            return;
        }

        if(front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }

        patient[rear] = nm;
        patientPriority[rear] = pri;

        cout << nm << " Welcome to hospital" << endl;
        cout << "Your priority is: " << pri << endl;
    }

    void deletePatient()
    {
        if(isEmpty())
        {
            cout << "No patient present in hospital" << endl;
            return;
        }

        int highest = front;

        for(int pos = front + 1; pos <= rear; pos++)
        {
            if(patientPriority[pos] > patientPriority[highest])
            {
                highest = pos;
            }
        }

        cout << "\nTreating Patient: "
             << patient[highest] << endl;

        for(int pos = highest; pos < rear; pos++)
        {
            patient[pos] = patient[pos + 1];
            patientPriority[pos] = patientPriority[pos + 1];
        }

        rear--;

        if(rear < front)
        {
            front = rear = -1;
        }
    }

    void disp()
    {
        cout << "\nPatient List:" << endl;

        if(isEmpty())
        {
            cout << "No patient present in hospital" << endl;
            return;
        }

        for(int pos = front; pos <= rear; pos++)
        {
            cout << patient[pos]
                 << " - Priority: "
                 << patientPriority[pos] << endl;
        }
    }
};

int main()
{
    Patient p;

    p.AddPatient("Amol", 8);
    p.AddPatient("Papu", 7);
    p.AddPatient("Karan", 4);
    p.AddPatient("Rahul", 9);

    p.disp();

    p.deletePatient();
    p.disp();

    p.deletePatient();
    p.disp();

    return 0;
}


/*

Amol Welcome to hospital
Your priority is: 8
Papu Welcome to hospital
Your priority is: 7
Karan Welcome to hospital
Your priority is: 4
Rahul Welcome to hospital
Your priority is: 9

Patient List:
Amol - Priority: 8
Papu - Priority: 7
Karan - Priority: 4
Rahul - Priority: 9

Treating Patient: Rahul

Patient List:
Amol - Priority: 8
Papu - Priority: 7
Karan - Priority: 4

Treating Patient: Amol

Patient List:
Papu - Priority: 7
Karan - Priority: 4

*/
