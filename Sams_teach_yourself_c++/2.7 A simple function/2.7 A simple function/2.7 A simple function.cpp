#include <iostream>
using namespace std;
int Add(int first, int second)
{
	cout << "in Add(), recived " << first << " and " << second << "\n";
	return (first + second);
}

int main()
{
	cout << "im in main()!\n";
	int a, b, c;
	cout << "enter two numbers, leave a space between them: ";
	cin >> a;
	cin >> b;
	cout << "\nCalling Add()\n";
	c = Add(a,b);
	cout << "\nBack in main().\n";
	cout << "c was set to " << c;
	cout << "\nExiting...\n\n";

}