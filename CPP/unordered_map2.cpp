#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s = "AmolAA";
    unordered_map<char , int> mp;
    for(char c : s)
    mp[c]++;
    
    cout<<mp['A'];
}
//OP - 3