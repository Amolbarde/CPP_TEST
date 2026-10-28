#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 ifstream fp("input.txt");
 if(!fp.is_open())
 {
  cerr << "error opening the file";
  return 1;
 }
 
 int num;
 int cnt = 0;
 while(fp>>num)
 {
  cnt++;
  cout << cnt << ". " <<endl;
 }
 cout << " Total value read;" << cnt << endl;
 fp.close();
 return 0;
}
