#include<iostream>
using namespace std;
class student
{
 public:
   int rno = 10;
   string name;
student(string nm)
{
     name = nm;
    
    //cout << "Name = "<<name<<endl;
    cout << "roll number = "<<rno<<endl;
    cout<<"parametrized constructor is called"<<endl;
}
};
int main()
{
    student s("Amol");
    s.name;
}   