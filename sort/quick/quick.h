// Copyright [2020] <Qin Huang>

#ifndef SORT_QUICK_QUICK_H_
#define SORT_QUICK_QUICK_H_

#include <algorithm>
#include <iostream>

#include "sort/quick/quick.h"

template <typename T>
void quick_sort_recursive(T* array, int left, int right) {
  if (left >= right) return;

  int i = left, j = right;
  T base = array[left];

  while (i < j) {
    while (array[j] >= base && i < j) {
      j--;
    }
    if (i < j) array[i++] = array[j];
    while (array[i] <= base && i < j) {
      i++;
    }
    if (i < j) array[j--] = array[i];
  }
  array[i] = base;

  quick_sort_recursive(array, left, i - 1);
  quick_sort_recursive(array, i + 1, right);
}

template <typename T>
void quick_sort(T* array, int len) {
  quick_sort_recursive(array, 0, len - 1);
}

#endif  // SORT_QUICK_QUICK_H_
