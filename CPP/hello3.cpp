#include<iostream>
using namespace std;

int main()
{
	const int MAX_SIZE = 100;
	char input[MAX_SIZE];
	cout<<"Who are you : ";
	cin.getline(input,MAX_SIZE);
	cout << "Hello\t" <<input <<endl;
	return 0;
}
