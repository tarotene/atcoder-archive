#include <bits/stdc++.h>
using namespace std;

int main() {
  size_t x = 0, y = 0, z = 0, k = 0;
  cin >> x >> y >> z >> k;
  
  vector<long long int> a(x, 0);
  for (size_t i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  
  vector<long long int> b(y, 0);
  for (size_t i = 0; i < b.size(); ++i) {
    cin >> b[i];
  }
  
  vector<long long int> c(z, 0);
  for (size_t i = 0; i < c.size(); ++i) {
    cin >> c[i];
  }
  
  vector<long long int> plus_ab(a.size() * b.size(), 0);
  for (size_t i = 0; i < a.size(); ++i) {
    for (size_t j = 0; j < b.size(); ++j) {
      plus_ab[y * i + j] = a[i] + b[j];
    }
  }
  
  sort(plus_ab.begin(), plus_ab.end(), greater<long long int>());
  // for (int i = 0; i < plus_ab.size(); ++i) {
  //   cout << "plus_ab[" << i << "] = " << plus_ab[i] << endl;
  // }
  // return 0;
  
  vector<long long int> e(min(k, plus_ab.size()), 0);
  for (size_t i = 0; i < e.size(); ++i) {
    e[i] = plus_ab[i];
  }
  
  vector<long long int> plus_ec(e.size() * c.size(), 0);
  for (size_t i = 0; i < e.size(); ++i) {
    for (size_t j = 0; j < c.size(); ++j) {
      plus_ec[z * i + j] = e[i] + c[j];
    }
  }
  
  sort(plus_ec.begin(), plus_ec.end(), greater<long long int>());
  // for (int i = 0; i < plus_ec.size(); ++i) {
  //   cout << "plus_ec[" << i << "] = " << plus_ec[i] << endl;
  // }
  // return 0;
  
  for (int i = 0; i < k; ++i) {
    cout << plus_ec[i] << endl;
  }
}