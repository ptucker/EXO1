#include <iostream>
#include <string>
using namespace std;

string Sort(string);

int main()
{
	string word;
	cin >> word;
	Sort(word);
}

string Sort(string word)
{
	string tempAlpha = word;
	string alpha;
	int length = alpha.length();
	for (int i = 0; i <= length; i++)
	{
		char temp = 'A';
		for (int j = 0; j <= length - i; j++)
		{
			if (tempAlpha.at(j) < temp)
			{
				temp = alpha.at(j);
				tempAlpha.erase(j);
				j = length + 1;
			}
			alpha.push_back(temp);
		}
	}
	cout << alpha<<endl;
	return 0;
}