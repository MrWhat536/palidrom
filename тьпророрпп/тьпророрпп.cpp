#include <iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<vector>

using namespace std;


bool checker(string word)
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
		string www;
		getline(cin, wow); "\n";
		wow.erase(remove(wow.begin(), wow.end(),' '),wow.end());
		if (checker(wow))
		{
			cout << "Это палиндром\n";
		}
		else
		{
			cout << "Это не палиндром\n";
		}
	}
}