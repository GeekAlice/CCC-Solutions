#include <bits/stdc++.h>

using namespace std;
int n,cnt;
int main() { 
  cin >> n;
  bool good = true;
  while (n--) {
    int x, y;
    cin >> x >> y;
    int val = (5 * x) - (3 * y);
    if (val <= 40) {
      good = false;
      continue;
    }
    cnt += 1;
  }
  if (good == true) {
    cout << cnt << "+";
    return 0;
  }
  cout << cnt;
  return 0;
}
