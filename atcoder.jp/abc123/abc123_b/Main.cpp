#include <bits/stdc++.h>
using namespace std;

template <typename T>
void insertionSort(vector<T> &d, vector<T> &e);

int main() {
  vector<int> d(5, 0), e(5, 0);
  for (int i = 0; i < 5; ++i) {
    cin >> d[i];
    e[i] = ((int) ceil((double) d[i] / 10.0)) * 10;
  }
  
  insertionSort(d, e);
  
  cout << e[0] + e[1] + e[2] + e[3] + d[4] << endl;
  
  return 0;
}

template <typename T>
void insertionSort(vector<T> &d, vector<T> &e)
{
    for (int i = 1; i < d.size(); ++i)
    {
        T v = d[i], w = e[i];
        int j = i - 1;
        while (j >= 0 && e[j] - d[j] > w - v)
        {
            d[j + 1] = d[j];
            e[j + 1] = e[j];
            j--;
        }
        d[j + 1] = v;
        e[j + 1] = w;
    }
}