#include <string>
#include <iostream>

using namespace std;

int main()
{
	string name;

	cout << "Type name: ";
	cin >> name;

	string greeting = "Hello, ";
	greeting += name;
	cout << greeting << endl;

	auto space = greeting.find(" ");

	cout << greeting.substr(space + 1) << endl;



	return 0;
}