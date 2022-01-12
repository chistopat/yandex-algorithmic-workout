//
// Created by Yegor Chistyakov on 12.01.2022.
//

#include <iostream>
#include <vector>

int Median(const std::vector<int>& container, int n) {
  if(container.empty()) return 0;
  return container[n / 2];
}

void Test() {
  assert(Median(std::vector<int>{1,2,3},   3) == 2);
  assert(Median(std::vector<int>{},        0) == 0);
  assert(Median(std::vector<int>{1,2,3,4}, 4) == 3);
  assert(Median(std::vector<int>{1,2,100}, 3) == 2);
}


int main() {
  Test();

  int n = 0;
  std::cin >> n;

  std::vector<int> houses(n);
  for (auto& h : houses) {
    std::cin >> h;
  }
  std::cout << Median(houses, n);
}