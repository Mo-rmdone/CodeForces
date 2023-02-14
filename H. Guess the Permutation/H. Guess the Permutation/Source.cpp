#include<iostream>
#include<vector>
using namespace std;
int n, m;
vector<pair<int, int>> vec;

bool checker(int x)
{
	int pr = 0;
	vector<int>con(n + 3);
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].first == x || vec[i].second == x)
		{
			continue;
		}
		pr++;
		con[vec[i].first]++;
		con[vec[i].second]++;
	}

	for (int i = 1; i <= n; i++)
	{
		if (con[i] == pr)
		{
			return true;
		}

	}

	return false;

}

int main()

{
	/*cin >> n >> m;
	vec.resize(m);
	for (int j = 0; j < m; j++)
	{
		cin >> vec[j].first >> vec[j].second;
	}

	if (checker(vec[0].first))
	{
		cout << "YES\n";

	}
	else if (checker(vec[0].second))

	{
		cout << "YES\n";

	}
	else

	{
		cout << "NO\n";
	}*/


	/*int n, con;
	cin >> n;
	int arr[n][n], res[n + 1] = { 0 };

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}*/


	/*for (int c = 1; c <= n; c++)
	{
		for (int i = 0; i < n; i++)
		{
			con = 0;
			for (int z = 0; z < n; z++)
			{
				if (arr[i][z] == c )
				{
					con++;
				}
			}

			if (con == n - c && !res[i + 1])
			{
				res[i + 1] = c;
				break;
			}


		}
	}

	for (int z = 1; z <= n; z++)
	{

		cout << res[z] << " ";
	}*/




return 0;
}