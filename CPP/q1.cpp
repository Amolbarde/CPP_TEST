//qesign a broweser navigtion system using 2 stack. the system should support: visit a new webpage : GO Back; GO forward; display currant webpage; for example
//Google->youtube->wikipedia->sppu
//if the user select back, the current page should be move to the forward stack. implement the system and test for the at least 5 nevigation operation 
#include<iostream>
#include<stack>
using namespace std;
class webpage
{
 stack<string> forward;
 stack<string> backword; 
  int ch; 
  
  
  void visitPage()
  {
  do{
    cout<<"1-youtube \n 2-google \n3-weippida \n4-sppu";
    cout<<"Enter choice:";
    cin>>ch;
    switch(ch)
    {
     case 1: cout<<"you visit on youtube";
     break;
     case 2: cout<<"you visit on youtube";
     break;
     case 3: cout<<"you visit on youtube";
     break;
     case 4: cout<<"you visit on youtube";
     break;
     
    }
  }while(ch>5);
  }
  
 void choice()
 {
  
 do{
   cout<<"1-visit a new webpage"<<endl;
    cout<<"2-GO back"<<endl;
    cout<<"3-GO forward"<<endl;
    cout<<"4-display current webpage"<<endl;
   cout<<"Enter your choice:";
   cin>>ch;
   
   switch(ch)
   {
     case 1:
     break;
     case 2:
     break;
     case 3:
     break;
     
   }
 }while(ch>4);
 }
 };
 int main()
 {}

