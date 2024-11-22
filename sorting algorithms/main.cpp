#include "algorithms.cpp"

int main() {
    int Bubble5[] = {5,2,8,9,4};
    bubbleSort(5,Bubble5);
    for (int i = 0; i <= 5; i++) {
        std::cout << Bubble5[i] <<'\n';
    }

    
    return 0;
}