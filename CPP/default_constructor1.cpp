#include<iostream>
using namespace std;
class student
{
 public:
   int rno = 10;

student()
{
    cout << "roll number = "<<rno<<endl;
}
};
int main()
{
    student s;
}