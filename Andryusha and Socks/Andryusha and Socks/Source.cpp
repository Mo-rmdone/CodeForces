#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int  SockSize,s;
	cin >> SockSize;
	/*if (SockSize == 1)
	{
		int p1, p2;
		cin >> p1 >> p2;
		cout << 1;
		return 0;

	}*/

	int table =0, counter = 0;
	vector<int> arr(SockSize+1, 0);
	for (int i = 0; i < SockSize * 2; i++)
	{
		
		cin >> s;
		arr[s]++;
		if (arr[s] == 2)
		{
			table--;
			
		}
		else
		{
			table++;
			counter = max(table, counter);
		}

	}
	cout << counter << endl;


	return 0;
}