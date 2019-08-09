#include <iostream>
using namespace std;
int main()
{
	int myAge = 21;
	int yourAge = 22;
	cout << "I am: " << myAge << " years old.\n";
	cout << "you are: " << yourAge << " years old.\n";
	myAge++, ++yourAge;
	cout << "One year passes...\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "you are: " << yourAge << " years old.\n";
	cout << "Another year passes\n";
	cout << "I am: " << myAge++ << " years old.\n";
	cout << "you are: " << ++yourAge << " years old.\n";
	cout << "Lets print it again.\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "you are: " << yourAge << " years old.\n";
}