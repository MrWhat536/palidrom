#include <iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;


int checker(string word)
{
	int lon = word.length();
	for (int i = 0; i < lon / 2; i++)
	{
		if (word[i] != word[lon - i - 1])
			return false;
	}
	return true;
}

int main() {
	while (true) {
		setlocale(LC_ALL, "ru");
		string wow;
		getline(cin, wow); "\n";
		if (checker(wow))
		{
			cout << "Это палидром\n";
		}
		else
		{
			cout << "Это не палидром\n";
		}
	}
}