#include<iostream>
using namespace std;
class student
{
    public:
     int age;
    
     student(int a)
     {
        age = a;
     }
    student(const student &s)
    {
        age = s.age;
        cout <<"copy constructor is called"<<endl;
    }
};
int main()
{
    student s1(20);
    student s2 = s1;
}