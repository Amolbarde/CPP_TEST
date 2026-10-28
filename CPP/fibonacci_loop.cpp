#include <iostream>
using namespace std;

int main() 
{
   int t1=0;
   int t2=1;
   int nextTerm;
   int n;
   cout<<"Enter no of term:";
   cin>>n;

   for(int i=1;i<=n;i++)
   {
    if(i==1)
    {
        cout<<t1<<" ";
        continue;
    }
    if(i==2)
    {
        cout<<t2<<" ";
        continue;
    }
    nextTerm = t1+t2;
    t1 = t2;
    t2 = nextTerm;
   cout<<nextTerm<<" ";
   }
cout<<endl;
}
