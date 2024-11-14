#include "algorithms.hpp"
#include <array>
#include <iostream>

void bubbleSort(int n,int arr[] ) {
    bool swap = true;
    std::cout << "made swap var\n";
    while (swap) {
        std::cout << ":3\n";
        swap = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[i+1]) {
                int tempData = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tempData;
                swap = true;
            }
        }
    }
}