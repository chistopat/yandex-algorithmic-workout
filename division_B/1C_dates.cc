//
// Created by Yegor Chistyakov on 12.01.2022.
//

#include <iostream>
#include <cassert>

bool CheckDateFormat(int first, int second) {
  if (first > 12 || second > 12 || first == second) {
    return true;
  }
  return false;
}


void Test() {
  assert(!CheckDateFormat(1, 2));
  assert(CheckDateFormat(3, 3));
  assert(CheckDateFormat(2, 29));
  assert(CheckDateFormat(15, 3));
}

int main () {
  Test();

  int first = 0;
  int second = 0;

  std::cin >> first >> second;
  std::cout << CheckDateFormat(first, second);

  return 0;
}