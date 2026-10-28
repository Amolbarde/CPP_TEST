#include<iostream>
using namespace std;
class BankAccount
{
 public:
   string nm;  // Anyone can accesss
protected:
   int bal;   //child class can access

private:
   int pin;

public:
    BankAccount(string n,int b, int p)
    {
        nm = n;
        bal = b;
        pin = p;
    }
void showpin()
{
    cout << "PIN: " << pin <<endl;
}
};
class user : public BankAccount
{
    public:
      user(string n,int b, int p) : BankAccount(n,b,p){}
    void show()
    {
        cout << "balance :" << bal <<endl;
    }
};
int main()
{
    user u1("Amol", 50000,826282);
    cout << u1.nm<<endl;
    u1.show();
    u1.showpin();
}