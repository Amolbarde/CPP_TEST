#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cout << "Enter number: ";
    cin >> n;

    while (n != 0)
    {
        s = s + (n % 10);  // add last digit
        n = n / 10;        // remove last digit
    }

    cout << "Sum = " << s;
    return 0;
}

