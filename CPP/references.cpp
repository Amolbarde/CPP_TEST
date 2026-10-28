#include<iostream>
using namespace std;
class chance
{
    public:
    void change(int &x)
     {
       x = 50;
    }
};
int main()
{
    chance c;
    int a = 10;
    c.change(a);
    cout <<a << endl;
}
// 50