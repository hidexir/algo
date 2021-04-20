#include <iostream>
#include <vector>

using namespace std;

//echo "5 10\n 1 2 4 5 11"| ./a.out
int main() {
  int N,W;
  cin >> N >> W;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];

  bool exist = false;

  //N=5, [11111]
  for (int bit = 0; bit < (1 << N); ++bit) {
    int sum = 0;
    cout << bitset<5>(bit) << endl;
    for (int i = 0; i < N; ++i) {
      if (bit & (1 << i)) {
        sum += a[i];
      }
    }
    if (sum == W) exist =true;
  }


  if (exist) cout << "Yes" << endl;
  else cout << "No" << endl;
}
