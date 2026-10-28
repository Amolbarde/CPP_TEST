#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    cout <<"no of argument"<< argc << endl;
    cout<<a+b<<endl;

    for(int i = 0; i < argc; i++) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

}