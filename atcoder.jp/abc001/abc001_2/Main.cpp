#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  
  cout << setfill('0') << right << setw(2);
  
  if (a < 100) {
    cout << 0 << endl;
  } else if (a <= 5000) {
    cout << a / 100 << endl;
  } else if (a <= 30000) {
    cout << a / 1000 + 50 << endl;
  } else if (a <= 70000) {
    cout << (a / 1000 - 30) / 5 + 80 << endl;
  } else {
    cout << 89 << endl;
  }
  
  return 0;
}