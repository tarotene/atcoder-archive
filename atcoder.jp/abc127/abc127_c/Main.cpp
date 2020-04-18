#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0, M = 0;
  cin >> N >> M;
  
  int lb = 0, rb = N;
  vector<int> L(M, 0), R(M, 0);
  for (int i = 0; i < M; ++i) {
    cin >> L[i] >> R[i];
    if (L[i] > lb) {
      lb = L[i];
    }
    if (R[i] < rb) {
      rb = R[i];
    }
  }
  
  cout << max(rb - lb + 1, 0) << endl;
  
  return 0;
}