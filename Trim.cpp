#include <iostream>
#include <string>

using namespace std;

string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i, S1.length() - i);
		}
	}
	return "";
}

string TrimRight(string S1)
{
	for (short i = S1.length()-1; i > 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0,i+1);
		}
	}
	return "";
}

string Trim(string S1)
{
	return (TrimLeft(TrimRight(S1)));
}

int main()
{
	string S1 = "             Hello world                ";

	cout << "\nString\t\t= " << S1;
	cout << "\nTrim left\t= " << TrimLeft(S1) << endl;
	cout << "Trim Right\t= " << TrimRight(S1) << endl;
	cout << "Trim All\t= " << Trim(S1) ;

	system("pause>0");
}
