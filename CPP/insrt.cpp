#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
void print(unordered_map<int , string> mp)
{
    for(auto x : mp)
    cout<<x.first <<":"<<x.second<<endl;
    return ;
}
int main()
{
    unordered_map<int,string> mp;
    mp[1] = "Amol";
    mp.insert({2,"Barde"});
    mp.insert({3,"Khanapur"});
    
    print(mp);
}

/*
3:Khanapur
2:Barde
1:Amol

*/