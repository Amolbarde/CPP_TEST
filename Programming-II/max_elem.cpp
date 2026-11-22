#include <iostream>
using namespace std;

int findMax(int a[], int low, int high) {
    if (low == high)
        return a[low];

    int mid = (low + high) / 2;

    int left = findMax(a, low, mid);
    int right = findMax(a, mid + 1, high);

    if (left > right)
        return left;
    else
        return right;
}

int main() {
    int a[] = {4, 8, 2, 9, 5};
    int n = 5;

    cout << "Maximum: " << findMax(a, 0, n - 1);
    return 0;
}
