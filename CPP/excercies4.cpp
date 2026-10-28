#include <iostream>
using namespace std;

class Matrix {
public:
    int rows;
    int cols;
    float* data;

    // Constructor
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        data = new float[rows * cols];

        
        for (int i = 0; i < rows * cols; i++) {
            data[i] = 0;
        }
    }

    // Destructor
    ~Matrix() {
        delete[] data;
    }

  
    void set(int i, int j, float value) {
        int index = i * cols + j;
        data[index] = value;
    }

   
    float get(int i, int j) const {
        int index = i * cols + j;
        return data[index];
    }

    // Print matrix
    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Matrix m(2, 3);

    m.set(0, 0, 1);
    m.set(0, 1, 2);
    m.set(0, 2, 3);

    m.set(1, 0, 4);
    m.set(1, 1, 5);
    m.set(1, 2, 6);

    cout << "Matrix is:" << endl;
    m.print();

    return 0;
}

