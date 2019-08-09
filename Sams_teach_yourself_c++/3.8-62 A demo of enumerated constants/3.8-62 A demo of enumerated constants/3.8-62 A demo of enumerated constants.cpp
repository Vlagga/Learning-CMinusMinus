#include <iostream>
int main()
{
	enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
	Days today;
	today = Monday;

	if (today == Friday || today == Sunday || today == Saturday)
		std::cout << "\nGotta love the weekends!\n";
	else
		std::cout << "\n The weekend can't come soon enough!\n";

}