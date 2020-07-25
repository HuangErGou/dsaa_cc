// Copyright [2020] <Qin Huang>

#include <iostream>

#include "sort/merge/merge.h"
#include "sort/print_array.h"

int main(int argc, char* argv[]) {
  int array[] = {8, 1, 3, 2, 7, 3, 23, 45, 23, 665, 33, 57, 2};

  std::cout << "Before sort:";
  print_array(array, ARRAY_SIZE(array));

  merge_sort(array, ARRAY_SIZE(array));

  std::cout << "After sort:";
  print_array(array, ARRAY_SIZE(array));
  return 0;
}
