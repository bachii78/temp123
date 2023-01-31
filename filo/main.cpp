#include <iostream>

#include "fifo.h"

int main(){
    struct fifo test;
    initBuffer(&test, 3);
    fillRandom(&test);	//это что-то новое....
    showMass(&test);	//эта функция не применима для демонстрации работы fifo
//    getFromEnd(&test, );	//комментировать код и его выкладывать на в репозиторий вообще строго запрещено... это на будущее....
//    putFromEnd();
    showMass(&test);
    flush(&test);	
    return 0;
}
