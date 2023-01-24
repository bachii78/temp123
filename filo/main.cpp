#include "fifo.h"
#include <iostream>

int main(){
    struct fifo test;
    initBuffer(&test, 3);
    fillRandom(&test);
    showMass(&test);
//    getFromEnd(&test, );
//    putFromEnd();
    showMass(&test);
    flush(&test);
    return 0;
}
