#include <bits/stdc++.h>
using namespace std;

int main() {
  int r = 0, D = 0;
  vector<int> x(11, 0);
  cin >> r >> D >> x[0];
  
  // d = D / (r - 1);
  
  for (int i = 1; i < 11; i++) {
    x[i] = r * x[i - 1] - D;
    cout << x[i] << endl;
  }
  
  return 0; 
}