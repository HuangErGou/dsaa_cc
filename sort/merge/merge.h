// Copyright [2020] <Qin Huang>

#ifndef SORT_MERGE_MERGE_H_
#define SORT_MERGE_MERGE_H_

#include <cstdlib>
#include <iostream>

template <typename T>
void merge_sort_recursive(T* array, T* reg, int start, int end) {
  int len = end - start;

  if (len <= 0) return;

  int mid = (len / 2) + start;

  int start1 = start, end1 = mid;
  int start2 = mid + 1, end2 = end;
  merge_sort_recursive(array, reg, start1, end1);
  merge_sort_recursive(array, reg, start2, end2);

  int k = start1;
  while (start1 <= end1 && start2 <= end2) {
    reg[k++] =
        array[start1] < array[start2] ? array[start1++] : array[start2++];
  }

  while (start1 <= end1) {
    reg[k++] = array[start1++];
  }

  while (start2 <= end2) {
    reg[k++] = array[start2++];
  }

  for (k = start; k <= end; ++k) {
    array[k] = reg[k];
  }
}

template <typename T>
void merge_sort(T* array, size_t size) {
  T reg[size];

  merge_sort_recursive(array, reg, 0, size - 1);
}

#endif  // SORT_MERGE_MERGE_H_
