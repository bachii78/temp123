#include <iostream>

void showMass(int* ar, int size){
    for(int i = 0; i < size; i++){
        std::cout << ar[i] << "  ";
    }
    std::cout << std::endl;
}
void swap(int&a, int&b){
    int temp = a;
    a = b;
    b = temp;

}
void intsertionSort(int* ar, int size){
    for(int i = 0; i < size - 1; i++){
            int j = i;
            for(j; j >= 0 && ar[j+1] < ar[j]; j--){
                swap(ar[j + 1], ar[j]);
            }

    }


}
int main(){
    int mass[10] = {1, -89, 12, 0, -3, 114, 2, -9, 10, -1};
    showMass(mass, 10);
    intsertionSort(mass, 10);
    showMass(mass, 10);
    return 0;
}
