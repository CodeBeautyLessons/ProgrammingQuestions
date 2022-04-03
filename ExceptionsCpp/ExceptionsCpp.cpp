#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
	Printer(string name, int availablePaperAmount)
	{
		_name = name;
		_availablePaperAmount = availablePaperAmount;
	}

	void Print(string txtDoc)
	{
		int requiredPaper = txtDoc.length() / 10;

		if (requiredPaper > _availablePaperAmount)
		{
			throw "No paper";
		}

		cout << "Printing..." << endl << txtDoc << endl;
		_availablePaperAmount -= requiredPaper;
	}

private:
	string _name;
	int _availablePaperAmount;
};

int main()
{
	Printer myPrinter("HP DeskJet", 10);
	try
	{
		myPrinter.Print("Hello, my name is Vova. Hello, my name is Vova. Hello, my name is Vova. Hello, my name is Vova. Hello, my name is Vova.");
	}
	catch (const char * txtException)
	{
		cout << "Exception: " << txtException << endl;
	}
	catch (int exCode) 
	{
		cout << "Exception code: " << exCode << endl;
	}
	catch (...)
	{
		cout << "Exception happened!" << endl;
	}

	system("pause>nul");
	return 0;
}
