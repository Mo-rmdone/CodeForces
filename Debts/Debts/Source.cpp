#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, m;
	cin >> n >> m;
	long long arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (m--) {
		int from, to, siz;
		cin >> from >> to >> siz;
		if (arr[from - 1] >= siz) {
			arr[from - 1] = arr[from - 1] - siz;
			arr[to - 1] = arr[to - 1] + siz;
		}
		else if (arr[from - 1] < siz) {
			arr[from - 1] = arr[from - 1] - siz;
			arr[to - 1] = arr[to - 1] + siz;
		}

	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}