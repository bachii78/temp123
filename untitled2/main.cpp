#include <iostream>
#include <time.h>


//int getRandom(){
//    srand(time(nullptr));
//    int a = rand % 100;
//    return a;
//}
void buildLine(int amountSpace, char symSpace, int amountSign, char sym){
    for(int i = 0; i < amountSpace; i++){
        std::cout << symSpace;
    }
    for(int i = 0; i < amountSign; i++){
        std::cout << sym;
    }
    std::cout << std::endl;

}

void buildTriangle(int h, int x){
    for(int i = 0; i < h; i++){
        buildLine(x - i, ' ', (2 * i) + 1, '*');
    }
}

void buildTree(){
    buildTriangle(3, 10);
    buildTriangle(4, 10);
    buildTriangle(5, 10);
}

int main(){
    buildTree();

    return 0;
}
