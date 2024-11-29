#include "algorithms.cpp"

int main() {
    int Bubble5[] = {5,2,8,9,4};
    //bubbleSort(5,Bubble5);
    ////////////quickSort(Bubble5,0,4);
    //mergeSort(Bubble5,0,4); // gives 9,4,8,9,4
    insertionSort(Bubble5,4);
    for (int i = 0; i <= 5; i++) {
        std::cout << Bubble5[i] <<'\n';
    }

    
    return 0;
}