#include <bits/stdc++.h>
using namespace std;

bool myless(tuple<string, int, int> lhs, tuple<string, int, int> rhs) {
  if (get<0>(lhs) != get<0>(rhs)) {
    return (get<0>(lhs) < get<0>(rhs));
  } else {
    return (get<1>(lhs) > get<1>(rhs));
  }
}

int main() {
  int N = 0;
  cin >> N;
  
  vector<tuple<string, int, int>> sp(N);
  string s_tmp = "";
  int p_tmp = 0;
  for (int i = 0; i < N; ++i) {
    cin >> s_tmp >> p_tmp;
    sp[i] = make_tuple(s_tmp, p_tmp, i + 1);
  }
  
  sort(sp.begin(), sp.end(), myless);
  
  for (int i = 0; i < N; ++i) {
    cout << get<2>(sp[i]) << endl;
  }
  
  return 0;
}