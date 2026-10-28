#include<iostream>
using namespace std;
class test
{
    public:
     int* p;
     test()
     {
        p = new int(10); //allocate memory
     }
     
     ~test()
     {
        delete p;
        //free memory
     }
};
int main()
{
    test t;
}