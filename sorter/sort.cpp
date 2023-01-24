#include "sort.hpp"

void showMass(int* ar, int size){
    for(int i = 0; i < size; i++){
        std::cout << ar[i] << "  ";
    }
    std::cout << std::endl;
}

bool getStatInfo(int* ar, int sizeAr, int* statAr, int sizeStat) {
    bool error = true;
    for (int i = 0; i < sizeAr; i++) {
        if (sizeStat < ar[i]) {
            std::cout << "error" << std::endl;
            error = false;
            continue;	//return false;
        }

        statAr[ar[i]]++;
    }
    return error;
}

void setRandom(int* ar, int size){
    srand(time(nullptr));
        for (int i = 0; i < size; i++) {
            *(ar + i) = random() % 100;
        }
}

void swap(int&a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

int search(int* ar, int size, int i){
    int min = ar[i];
    int index = 0;
    for(int j = i; j < size; j++){
        if(ar[j] <= min){
            min = ar[j];
            index = j;
        }
    }
    return index;
}

void SelectionSort(int* ar, int size){
    for(int i = 0; i < size; i++){
        swap(ar[i], ar[search(ar, i, size)]);
    }

}

void bubbleSort(int*, int){

}

void countSort(int *inputArNeedSort, int sizeInput) {
    int countNum[100];
    if (getStatInfo(inputArNeedSort, sizeInput, &countNum[0], 100) == false) {
        std::cout << "can't sort" << std::endl;
    }

    int curIndexInputAr = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < countNum[i]; j++) {
            inputArNeedSort[curIndexInputAr++] = i;
        }
    }
}

void insertionSort(int* ar, int size){
    for(int i = 0; i < size - 1; i++){
        int j = i;
        for(j; j >= 0 && ar[j+1] < ar[j]; j--){
            swap(ar[j], ar[j + 1]);
        }

    }
}



