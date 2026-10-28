#include <iostream>
using namespace std;

int main()
{ 
    for(int i=1;i<=4;i++)
    {
        for(int space=1;space<=i;space++)
        {
            cout<<" ";
        }
        for(int star = 4;star>=i;star--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=4;i++)
    {
        for(int space=4;space>=i;space--)
        {
            cout<<" ";
        }
        for(int star = 1;star<=i;star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

/*

 ****
  ***
   **
    *
    *
   **
  ***
 ****

*/
