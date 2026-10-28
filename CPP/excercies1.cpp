#include <iostream>
using namespace std;

int arr[100];
int size = 0;


void insertAt(int index, int value) {                        // (a) Insert at index
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    size++;
}

            
void removeAt(int index) {                            // (b) Remove at index            
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

                       
void reverse() {                                  // (c) Reverse array
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

// (d) Selection sort (ascending)
void sortArray() {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}


void display() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    insertAt(0, 30);
    insertAt(1, 10);
    insertAt(2, 40);
    insertAt(3, 20);

    display();

    removeAt(1);
    display();

    reverse();
    display();

    sortArray();
    display();

    return 0;
}
