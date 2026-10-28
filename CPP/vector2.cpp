#include<iostream>
#include<vector>
using namespace std;
class vectors
{
    protected:
    vector<int> v;
    public:
    int n; 
    void getdata()
    {
        cout << "Enter vector size : " << endl;
        cin >> n;
        cout << "Enter vector elements : ";
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }
};
class display : public vectors
{
    public:
     void show()
     {
        for(int i : v)
        {
            cout << i << " | ";
        }
     }
};
int main()
{
    display d;
    d.getdata();
    d.show();
    return 0;
}