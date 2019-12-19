#include<iostream>
using namespace std;

int main()
{
	int realAnswer = 6;

	cout << "Guess the number between 1 and 10" << endl;

	int num;
	cin >> num;
	while (num != realAnswer)
	{
		cout << "Incorrect answer, try another one:" << endl;
		cin >> num;
	}

	cout << num << " is the correct number number";

	return 0;
}