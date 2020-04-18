#include <bits/stdc++.h>
using namespace std;

int main() {
  int A = 0, B = 0;
  cin >> A >> B;
  
  cout << max(2 * max(A, B) - 1, A + B);
  return 0;
}