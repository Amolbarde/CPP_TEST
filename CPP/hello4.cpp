#include<iostream>
using namespace std;

int main()
{
	const int MAX_SIZE=100;
	char input[MAX_SIZE];
	cout<< "who are you?\n";
	cin.getline(input,MAX_SIZE);
	
	cout<<"What is Your Age?\n ";
	int age;
	cin>>age;
	
	cout<<"\n Hello "<<input<<" with age " <<age<<endl;
	return 0;
}
