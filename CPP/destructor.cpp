#include<iostream>
using namespace std;
class test
{
 public:
   test()
   {
    cout << "object created.."<<endl;
   }

   ~test()
   {
    cout << "object destroyed"<<endl;
   }
};
int main()
{
    test t;
}