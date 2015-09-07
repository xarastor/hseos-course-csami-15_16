#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cfloat>

void swap_max_last(double* data, int amount) {
  int ind_max = 0;
  for (int i = 0; i < amount; ++i) {
    if (data[ind_max] - data[i] > DBL_EPSILON) ind_max = i;
  }
  std::swap(data[amount - 1], data[ind_max]);
}

void Selection_max_sort(double* data, int amount) {
  if (amount <= 1) return;
  swap_max_last(data, amount);
  Selection_max_sort(data, amount - 1);
}

int main() {
    int amount;
    std::cin >> amount;
    if (amount == 0) return 0;
    double data[amount];
    double dataOrdered[amount];
    for (int i = 0; i < amount; ++i){
        std::cin >> data[i];
        dataOrdered[i] = data[i];
    }
    Selection_max_sort(dataOrdered, amount);
    for (int i = 0; i < amount; ++i) {
        printf("%d %.10g %.10g\n", i + 1, data[i], dataOrdered[i]);
    }
    return 0;
}
