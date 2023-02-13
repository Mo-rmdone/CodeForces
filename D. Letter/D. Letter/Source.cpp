#include<iostream>
#include<string>
#include<algorithm>
#include<vector>


using namespace std;
int main()
{
	string s1, s2,s;
	char sp = ' ';
	int counter = 0;
	getline(cin,s1);
	getline(cin, s2);
	int arr[200] = { 0 };

	for (int i = 0; i < s1.size(); i++)
	{
		arr[s1[i]]++;	
	}

	for (int i = 0; i < s2.size(); i++)
	{
		if (!(s2[i] == sp))
		{
			s += s2[i];
		}
	}


	for (int i = 0; i < s.size(); i++)
	{	
		if (arr[s[i]] > 0)
		{
			arr[s[i]]--;
			counter++;
		}
		else
		{
			cout << "NO";
			return 0;
		}

	}

	if (counter == s.size())
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0; 
}