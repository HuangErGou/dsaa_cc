// Copyright [2020] <Qin Huang>

#include "sort/print_array.h"
#include "sort/quick/quick.h"

int main(int argc, char* argv[]) {
  int array[] = {8, 1, 3, 2, 7, 3, 23, 45, 23, 665, 33, 57, 2};

  std::cout << "Before sort:" << std::endl;
  print_array(array, ARRAY_SIZE(array));

  quick_sort(array, ARRAY_SIZE(array));

  std::cout << "After sort:" << std::endl;
  print_array(array, ARRAY_SIZE(array));
  return 0;
}
