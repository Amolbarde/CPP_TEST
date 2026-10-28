//can use anywhere
#include<iostream>
using namespace std;
class stud
{
    public:
    int id;
    string nm;
};
int main()
{
    stud s1;
    s1.id = 20;
    s1.nm = "abc";
    cout << s1.id << endl << s1.nm<<endl;
}