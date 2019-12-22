#include <string>
#include <iostream>

int main()
{
	std::string name;

	std::cout << "Type name: ";
	std::cin >> name;

	std::string greeting = "Hello, ";
	greeting += name;
	std::cout << greeting << std::endl;

	auto space = greeting.find(" ");

	std::cout << greeting.substr(space + 1) << std::endl;



	return 0;
}