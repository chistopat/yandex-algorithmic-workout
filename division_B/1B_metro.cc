//
// Created by Yegor Chistyakov on 12.01.2022.
//

#include <iostream>
#include <cassert>
#include <cmath>

bool CheckDateFormat(int first, int second, int year) {
  auto clockwise = std::abs(first - second) - 1;
  auto counterclockwise = year - clockwise - 2;
  return std::min(clockwise, counterclockwise);
}


void Test() {
  assert(CheckDateFormat(5, 6, 100) == 0);
  assert(CheckDateFormat(1, 9, 10) == 1);
}

int main () {
  Test();

  int total = 0;
  int first = 0;
  int second= 0;

  std::cin >> total >> first >> second;
  std::cout << CheckDateFormat(first, second, total);

  return 0;
}