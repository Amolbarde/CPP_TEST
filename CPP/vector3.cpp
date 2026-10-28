#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char> v = {'a','b','c','d','e'};
    for(char c : v)
    {
        cout << c << " | ";
    }
    
    vector<string> v1 = {"India", "USA", "America"};
    for(string s : v1)
    {
        cout << s << " | "; 
    }

}