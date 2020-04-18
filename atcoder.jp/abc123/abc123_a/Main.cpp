#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5, 0);
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
  }
  
  int k = 0;
  cin >> k;
  
  bool flag = false;
  for (int i = 0; i < 5; ++i) {
    for (int j = i + 1; j < 5; ++j) {
      if (abs(a[i] - a[j]) > k) {
        flag = true;
      }
    }
  }
  
  if (flag == true) {
    cout << ":(" << endl;
  } else {
    cout << "Yay!" << endl;
  }
  
  return 0;
}