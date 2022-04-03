#include <iostream>
using namespace std;

namespace namespace1
{
	int age = 25;
	string name = "Saldina";
}

namespace namespace2
{
	int age = 26;
}

int main()
{
	cout << namespace2::age;
	cout << namespace1::name;

	system("pause>0");
}