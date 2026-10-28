#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
   unordered_map<int,int> mp;
   mp[10]  = 100;
   if(mp.find(10) != mp.end())
   {
       cout<<"found";
   }
   else
   {
       cout<<"NOt found";
   }
}
//OP - found