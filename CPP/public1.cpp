#include<iostream>
using namespace std;
class student
{
    public:
    int rno;

    void show()
    {
        cout << "roll no : "<< rno<<endl;
    }
};
int main()
{
    student s;
    int r;
    cout << "Enter roll no:";
    cin >> r;
    s.rno = r;
    s.show();
    return 0;
}