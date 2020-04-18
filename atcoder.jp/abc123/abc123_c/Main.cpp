#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n = 0;
  cin >> n;
  long long int a = 0, b = 0, c = 0, d = 0, e = 0;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  
  long long int addtime = ceil((double) n / (double) min(a, min(b, min(c, min(d, e)))));
  cout << 4 + addtime << endl;
}