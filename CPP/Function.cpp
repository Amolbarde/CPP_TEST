#include <iostream>

using namespace std;

int addRange(int x, int y) {     // formal parameters
  int sum = 0;                   // local variable
  for(int i = x; i <= y; i++) {
     sum += i;
  }
  return sum;
}

int main() {
  int a, b;
  cout << "Give two numbers: ";
  cin >> a >> b;
  int c = addRange(a, b);    // actual parameters
  cout << "sum of " << a << ".." << b << " is " << c << endl;
  return 0;
}