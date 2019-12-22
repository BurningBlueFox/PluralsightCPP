#include <string>
#include <iostream>
#include "Person.h"

using namespace Human::Monkey;
using std::cout;
using std::endl;
using std::cin;

template<class T>
T First(T const& t1, T const& t2)
{
	return t1;
}
int main()
{
	Person p1 = Person("Thiago", "Leao", 182);
	Person p2 = Person("John", "Doe", 180);

	cout << "Is " + p1.GetName() +
		" taller then " + p2.GetName() + " ?" << endl;

	bool answer = p1 > p2;
	cout << "The answer is: " << std::boolalpha << answer << endl;

	cout << First(p1, p2).GetName() << endl;

	p2.Print();
	int x;
	cin >> x;


	return 0;
}