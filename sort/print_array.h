// Copyright [2020] <Qin Huang>

#ifndef SORT_PRINT_ARRAY_H_
#define SORT_PRINT_ARRAY_H_

#include <iostream>

template <typename T>
void print_array(T* array, size_t len) {
  for (int i = 0; i < len; ++i) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
}

#define ARRAY_SIZE(array) (sizeof((array)) / sizeof((array)[0]))

#endif  // SORT_PRINT_ARRAY_H_
