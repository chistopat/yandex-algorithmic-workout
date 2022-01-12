//
// Created by Yegor Chistyakov on 12.01.2022.
//
#include <iostream>
#include <cassert>


int CheckResult(int result, int iteractor, int checker) {
  if (iteractor == 0) {
    return result == 0 ? checker : 3;
  } else if (iteractor == 1) {
    return checker;
  } else if (iteractor == 4) {
    return result == 0 ? 4 : 3;
  } else if (iteractor == 6) {
    return 0;
  } else if (iteractor == 7) {
    return 1;
  } else {
    return iteractor;
  }
}

void Test() {
  assert(CheckResult( 0, 0, 0) == 0);
  assert(CheckResult(-1, 0, 1) == 3);
  assert(CheckResult(42, 1, 6) == 6);
  assert(CheckResult(44, 7, 4) == 1);
  assert(CheckResult( 1, 4, 0) == 3);
  assert(CheckResult(-3, 2, 4) == 2);

}

int main() {
  Test();

  int result = 0;
  int iteractor = 0;
  int checker = 0;

  std::cin >> result >> iteractor >> checker;
  std::cout << CheckResult(result, iteractor, checker);
}
