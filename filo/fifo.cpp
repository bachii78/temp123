#include "fifo.h"

void fillRandom(fifo* fifotest){
    srand(time(nullptr));
    for(int i = 0; i < fifotest->size; i++){
        fifotest->ar[i] = rand() % 100;
    }
}
void showMass(fifo* fifotest){
    for(int i = 0; i < fifotest->size; i++){
        std::cout << fifotest->ar[i] << '\t';
    }
    std::cout << std::endl;
}
int getFromEnd(fifo* fifotest, int* element){
    if(!fifotest->datalen){
        return -1;
    }
    *element = fifotest->ar[--fifotest->datalen];
    return 0;
 }

int putFromEnd(fifo* fifotest, int element){
    if(fifotest->datalen >= fifotest->size){
        return 1;
    }
    fifotest->ar[fifotest->datalen++] = element;
    return 0;
}

void deinit(fifo* fifotest){
    delete [] fifotest->ar;
}

void initBuffer(fifo* fifotest, int _size){
    fifotest->size = _size;
    fifotest->datalen = 0;
    fifotest->ar = new int[_size];
}

void flush(fifo* fifotest){
    fifotest->datalen = 0;
}
