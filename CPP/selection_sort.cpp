#include<iostream>
using namespace std;

int main()
{
    int arr[] = {40, 30, 20, 10, 100};
    int n = 5; // Using a variable for size makes code cleaner

    for(int i = 0; i < n - 1; i++)
    {
        int min = i;
        
        // FIX 1: Start 'j' at 'i + 1' to only scan the unsorted part
        // FIX 2: Check 'j < n' to prevent the infinite loop
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        
        // Swap the current element with the minimum element found
        swap(arr[i], arr[min]);
    }

    // Print the sorted array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
