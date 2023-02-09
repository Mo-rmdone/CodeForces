#include <iostream>
#include<algorithm>
using namespace std;
 
 
int main()
{
 
 
 int n, a, b, c;
 cin >> n >> a >> b >> c;
 int res = 0;
 
 for (int i = 0; i <= n; i++)
 {
  for (int j = 0; j <= n; j++)
  {
   int curlen = i * a + j * b;
   int remlen = n - curlen;
   if (remlen < 0 || remlen % c != 0)
    continue;
   int k = remlen / c;
   res = max(res, i +j +k);
 
  }
 }
 
 cout << res << endl;
 
 return 0;
}