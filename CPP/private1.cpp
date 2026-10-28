#include<iostream>
using namespace std;
class bank
{
    private:
       int pin;
    
    public:
     void setPin(int p)
     {
        pin = p;
     }
     void showPin()
     {
        cout << "pin is :"<<pin<<endl;
     }
};
int main()
{
    bank b; 
    b.setPin(1234);
    b.showPin();
    return 0;
}