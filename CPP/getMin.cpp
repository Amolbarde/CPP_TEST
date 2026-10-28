#include<iostream>
using namespace std;
int getMin(int a[], int n)
{
    int min = 0;
    for(int k = 1; k < n ; k++)
    {
        if(a[k] < a[min])
        {
            min = k;
        }
    }
    return min;
}
int main()
{
    int a[] = {5,6,7,9,1,0};
    int n = 5;
    int index = getMin(a,n);
    cout << "min val : " << a[index] << endl;
    cout << "Index : " << index << endl;
    
}