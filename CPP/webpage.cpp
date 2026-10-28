#include<iostream>
#include<stack>
using namespace std;

class webpage
{
    stack<string> forward;
    stack<string> backword;

    string current;

public:

    webpage()
    {
        current = "Google";
    }

   
    void visitPage()
    {
        int ch;
        string page;

         cout << "\nSelect webpage:\n";
        cout << "1. YouTube\n";
        cout << "2. Google\n";
        cout << "3. Wikipedia\n";
        cout << "4. SPPU\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                page = "YouTube";
                break;

            case 2:
                page = "Google";
                break;

            case 3:
                page = "Wikipedia";
                break;

            case 4:
                page = "SPPU";
                break;

            default:
                cout << "Invalid choice!\n";
                return;
        }

  
        backword.push(current);
        current = page;
        while(!forward.empty())
        {                                      
            forward.pop();
        }
        cout << "Visited: " << current << endl;
    }


 
    void goBack()
    {
        if(backword.empty())
        {
            cout << "No previous webpage!\n";
            return;
        }
        forward.push(current);

        current = backword.top();
        backword.pop();

        cout << "Back to: " << current << endl;
    }
    
    void goForward()
    {
        if(forward.empty())
        {
            cout << "No forward webpage!\n";
            return;
        }
       backword.push(current);
       current = forward.top();
        forward.pop();

        cout << "Forward to: " << current << endl;
    }

    void displayCurrent()
    {
        cout << "Current webpage: " << current << endl;
    }
    void choice()
    {
        int ch;

        do
        {
            cout << "\n BROWSER   \n";
            cout << "1. Visit a new webpage\n";
            cout << "2. GO Back\n";
            cout << "3. GO Forward\n";
            cout << "4. Display current webpage\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> ch;

            switch(ch)
            {
                case 1:
                    visitPage();
                    break;

                case 2:
                    goBack();
                    break;

                case 3:
                    goForward();
                    break;                

                case 4:
                    displayCurrent();
                    break;

                case 5:
                    cout << "Browser closed.\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }

        }while(ch != 5);
    }
};


int main()
{
    webpage browser;

    browser.choice();

    return 0;
}