#include<iostream>
#include<vector>
using namespace std;
class vector1
{
 protected:
  vector <int> vec;
  
 public:
   int n;
   
  void getData()
  {
   cout <<"Enter Vector Size  : ";
   cin >> n;
   cout <<"Enter Vector Element : ";
   for(int i=0;i<n;i++)
   {
   int x;
   cin >> x;
   vec.push_back(x);
   }
  }
  
};
class display:public vector1
{
 public:
 void show()
 {
  for(int show:vec)
  {
   cout << "vector elements : "  << show << endl;
  }
 }
};
int main()
{
 display v;
 v.getData();
 v.show();
}
