//
// Created by Yegor Chistyakov on 14.01.2022.
//

#include <iostream>
#include <cassert>
#include <utility>
#include <algorithm>
#include <array>

using namespace std;

int Solution(int d, int x, int y) {
  if (x >= 0 && y>=0 && x + y <= d) {
    return 0;
  } else {
    array<pair<int, int>, 3> dist;
    dist[0] = make_pair((x * x +  y * y), 1);
    dist[1] = make_pair(((x - d) * (x - d) + y * y), 2);
    dist[2] = make_pair((x * x + (y - d) * (y - d)), 3);
    return min_element(dist.begin(), dist.end())->second;
  }
}

void Test() {
  assert(Solution(5, 1, 1) == 0);
  assert(Solution(3, -1, -1) == 1);
  assert(Solution(4, 4, 4) == 2);
  assert(Solution(4, 2, 2) == 0);
}

int main() {
    int d = 0, x = 0, y = 0;
    cin >> d >> x >> y;
    cout << Solution(d, x, y);
}