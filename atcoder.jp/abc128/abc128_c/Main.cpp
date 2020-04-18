#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0, M = 0;
  cin >> N >> M;
  
  vector<int> k(M, 0);
  vector<vector<int>> s(M, vector<int>(N, 0));
  for (int i = 0; i < M; ++i) {
    cin >> k[i];
    for (int j = 0; j < k[i]; ++j) {
      cin >> s[i][j];
    }
  }
  
  vector<int> p(M, 0);
  for (int i = 0; i < M; ++i) {
    cin >> p[i];
  }
  
  size_t stN = static_cast<size_t>(N);
  
  set<int> si;
  for (int k = 0; k < pow(2, N); ++k) {
    si.insert(k);
  }
  
  for (int i = 0; i < M; ++i) {
    for (auto it = si.begin(); it != si.end();) {
      int sum_i = 0;
      for (int j = 0; j < k[i]; ++j) {
        sum_i += ((*it) >> (s[i][j] - 1));
      }
      if (sum_i % 2 != p[i]) {
        it = si.erase(it);
      } else {
        ++it;
      }
    }
  }
  
  cout << si.size() << endl;
  
  return 0;
}