#include <iostream>
int main()
{
	using std::cout;
	cout << "the size of an int is:\t\t" << sizeof(int) << " bytes.\n";
	cout << "the size of a shotrt int is:\t" << sizeof(short) << " bytes.\n";
	cout << "the size of a long in is:\t" << sizeof(long) << " bytes.\n";
	cout << "the size of a char is:\t\t" << sizeof(char) << " bytes.\n";
	cout << "the size of a float is:\t\t" << sizeof(float) << " bytes.\n";
	cout << "the size of a double is:\t" << sizeof(double) << " bytes\n";
	cout << "the size of a bool is:\t\t" << sizeof(bool) << " bytes\n";
}