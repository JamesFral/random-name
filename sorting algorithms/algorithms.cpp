#include "algorithms.hpp"
#include <array>

void bubbleSort(int n,int arr[] ) {
    bool swap = true;
    while (swap) {
        swap = false;
        for (int i = 0; i < n; i++) {
            if (arr[i], arr[i+1]) {
                int tempData = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tempData;
            }
        }
    }
}