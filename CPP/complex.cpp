

#include <iostream>
using namespace std;

// Definition of the Complex class
class Complex {
private:
    double real;    // Real part of the complex number
    double imag;    // Imaginary part of the complex number

public:
    // Constructor to initialize the complex number
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Destructor
    ~Complex() { }

    // Method to display the complex number
    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }

    // Method to add two complex numbers
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Method to subtract two complex numbers
    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Method to multiply two complex numbers
    Complex multiply(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }
};

int main() {
    // Creating two complex numbers
    Complex c1(3, 4);  // 3 + 4i
    Complex c2(1, -2); // 1 - 2i

    // Display the complex numbers
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();

    // Adding the complex numbers
    Complex sum = c1.add(c2);
    cout << "\nSum: ";
    sum.display();

    // Subtracting the complex numbers
    Complex difference = c1.subtract(c2);
    cout << "Difference: ";
    difference.display();

    // Multiplying the complex numbers
    Complex product = c1.multiply(c2);
    cout << "Product: ";
    product.display();

    return 0;
}

