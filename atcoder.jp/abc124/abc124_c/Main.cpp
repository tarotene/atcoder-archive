#include <bits/stdc++.h>
using namespace std;

int main() {
  string S = "";
  cin >> S;
  
  int cnt = 0;
  
  if (S.length() >= 2) {
    for (int i = 0; i < S.length() - 1; ++i) {
      if (S[i] == '1' && S[i + 1] == '1') {
        cnt++;
        S.replace(i + 1, 1, "0");
      } else if (S[i] == '0' && S[i + 1] == '0') {
        cnt++;
        S.replace(i + 1, 1, "1");
      }
    }
  }
  
  cout << min(cnt, static_cast<int>(S.length()) - cnt) << endl;
}