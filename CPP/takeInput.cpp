#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        cout << "Enter an Integar!!";
        return 1;
    }
int num = stoi(argv[1]);
cout << "Num : "<< num << endl;
}