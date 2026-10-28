#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.pop_back();
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " |";
        cout <<endl<<v.capacity();
    }

    vector<int> v1 = {19,20,39};
    cout << endl << v1[0] << endl << v1[1] << endl;

    vector<int> v2(5,10);
    cout << v2[0] <<endl;
    cout << v2[1] <<endl;
    cout << v2[2] <<endl;
    cout << v2[3] <<endl;
    cout << v2[4] <<endl;
     for(int i = 0; i<v2.size(); i++)
     {
        cout << v2[i] << " | ";
     }
    return 0;
}