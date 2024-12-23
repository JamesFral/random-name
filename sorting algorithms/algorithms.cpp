#include "algorithms.hpp"
#include <array>
#include <iostream>

void bubbleSort(int arr[], int n) {
    bool swap = true;
    //int swapNum = 0;
    //std::cout << "made swap var\n";
    while (swap) {
        //std::cout << ":3\n";
        swap = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[i+1]) {
                int tempData = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tempData;
                swap = true;
                //swapNum += 1;
                //std::cout << swapNum << '\n';
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

void merge(int arr[], int left, int middle, int right) {
    int x = 0;
    x = middle - left + 1;
    int y = 0;
    y = right - middle;
    //std::cout << ":3\n";
    int left2[x];
    int right2[y];
    for (int i = 0; i < x; i++) {
        left2[i] = arr[left + i];
    }
    for (int j = 0; j < y; j++) {
        right2[j] = arr[middle + 1 + j];
    }

    int i = 0; 
    int j = 0; 
    int k = left;

    while (i < x and j < y) {
        if (left2[i] <= right2[j]) {
            arr[k] = left2[i];
            i += 1;
        }
        else {
            arr[k] = right2[j];
            j += 1;
        }
        k += 1;
    }

    while (i < x) {
        arr[k] = left2[i];
        i += 1;
        k += 1;
    }
    while (j < y) {
        arr[k] = right2[j];
        j += 1;
        k += 1;
    }
 }

void mergeSort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }
    int middle = 0;
    middle = left + (right - left) / 2;
   mergeSort(arr, left, middle);
   mergeSort(arr, middle+1, right);
   merge(arr, left, middle, right);
}

void insertionSort(int arr[],int size) {
    for (int i = 0; i <= size; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 and arr[j] > key) {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size-1;i++){
        int smallIndex = i;
        for (int j = i+1; j < size;j++){
            if(arr[j] < arr[smallIndex]) {
                smallIndex = j;
            }
        }
        // swap arr[i] with arr[smallIndex]
        int tempData = arr[i];
        arr[i] = arr[smallIndex];
        arr[smallIndex] = tempData;
    }
}