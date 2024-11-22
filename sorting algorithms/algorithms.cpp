#include "algorithms.hpp"
#include <array>
#include <iostream>

void bubbleSort(int n,int arr[] ) {
    bool swap = true;
    //std::cout << "made swap var\n";
    while (swap) {
        //std::cout << ":3\n";
        swap = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= arr[i+1]) {
                int tempData = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tempData;
                swap = true;
            }
        }
    }
}

int partition(int arr[], int low, int high) { //seg fault 2
    int pivot = arr[high];
    int tempData;
    int i = low-1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            // swap arr[i] with arr[j]
            tempData = arr[j];
            arr[j] = arr[i]; // seg fault
            arr[i] = tempData;
            //std::swap(arr[j],arr[i]);
        }
    }
    tempData = arr[i + 1];
    arr[i+1] = arr[high];
    arr[high] = tempData;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
    
}