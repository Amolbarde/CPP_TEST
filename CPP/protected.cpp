// Accessible - inside same class and child class
// not accessible outide class directly
#include<iostream>
using namespace std;
class Parent
{
    protected:
     int money = 100000;
};
class Child : public Parent
{
 public:
  void show()
  {
    cout << "money is : "<<money<<endl;
  }
};
int main()
{
    Child c;
    c.show();
    return 0;
}