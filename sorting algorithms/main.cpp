#include "algorithms.cpp"
#include <cstdlib>
#include <ctime>
#include <chrono>

int main() {
    srand(time(0));
    int Bubble5[] = {5,2,8,9,4};
    //bubbleSort(Bubble5,4);
    //std::cout << "\n\n";
    ////////////quickSort(Bubble5,0,4);
    //mergeSort(Bubble5,0,4); // gives 9,4,8,9,4
    //insertionSort(Bubble5,4);
    // selectionSort(Bubble5,5);
    // for (int i = 0; i <= 4; i++) {
    //     std::cout << Bubble5[i] <<'\n';
    // }

    int arr100[10000]; //code from the canvas assignment.
    for(int i = 0; i < 10000; i++) {
    arr100[i] = rand() % 100; // Generate random numbers between 0 and 99
    }

    // for (int i = 0; i < 100; i++) {
    //     std::cout << arr100[i] << ", ";
    // }
    
    //quickSort(arr100,0,9999);
    auto start = std::chrono::high_resolution_clock::now();
    mergeSort(arr100,0,9999);
    
    //bubbleSort(arr100,99);
    //insertionSort(arr100,9999);
    //selectionSort(arr100,99);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // insertionSort(arr100,99);
    // for (int i = 0; i < 100; i++) {
    //     std::cout << arr100[i] << ", ";
    // }
    
    return 0;
}