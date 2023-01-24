#include <sort.hpp>
#include <iostream>

int main(){
    std::cout << "сортировка вставками: " << std::endl;
    int ar[10];
    setRandom(ar, 10);
    showMass(ar, 10);
    insertionSort(ar,10);
    showMass(ar,10);
    std::cout << "сортировка выбором: " << std::endl;
    int ar1[10];
    setRandom(ar1, 10);
    showMass(ar1, 10);
    SelectionSort(ar1,10);
    showMass(ar1, 10);
    return 0;
}

