#include <iostream>
#include <cmath>
using namespace std;

class Polynomial {
public:
    int degree;
    double* coeff;

    // Constructor
    Polynomial(int deg) {
        degree = deg;
        coeff = new double[degree + 1];

        // initialize all coefficients to 0
        for (int i = 0; i <= degree; i++) {
            coeff[i] = 0;
        }
    }

    // Destructor
    ~Polynomial() {
        delete[] coeff;
    }

    // Set coefficient for x^power
    void setCoefficient(int power, double value) {
        if (power <= degree) {
            coeff[power] = value;
        }
    }

    // Evaluate polynomial for given x
    double evaluate(double x) {
        double result = 0;
        for (int i = 0; i <= degree; i++) {
            result = result + coeff[i] * pow(x, i);
        }
        return result;
    }

    // Add two polynomials
    Polynomial add(const Polynomial& other) {
        int maxDegree;
        if (degree > other.degree)
            maxDegree = degree;
        else
            maxDegree = other.degree;

        Polynomial temp(maxDegree);

        for (int i = 0; i <= maxDegree; i++) {
            double c1 = (i <= degree) ? coeff[i] : 0;
            double c2 = (i <= other.degree) ? other.coeff[i] : 0;
            temp.coeff[i] = c1 + c2;
        }

        return temp;
    }

    // Print polynomial
    void print() {
        for (int i = degree; i >= 0; i--) {
            cout << coeff[i] << "x^" << i;
            if (i != 0)
                cout << " + ";
        }
        cout << endl;
    }
};

int main() {
    Polynomial p1(2); 
    p1.setCoefficient(0, 1);
    p1.setCoefficient(1, 2);
    p1.setCoefficient(2, 3);

    Polynomial p2(2);   
    p2.setCoefficient(0, 4);
    p2.setCoefficient(2, 1);

    cout << "Polynomial P1: ";
    p1.print();

    cout << "Polynomial P2: ";
    p2.print();

    Polynomial p3 = p1.add(p2);

    cout << "Sum Polynomial: ";
    p3.print();

    cout << "P1 evaluated at x = 2: ";
    cout << p1.evaluate(2) << endl;

    return 0;
}

