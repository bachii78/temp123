#ifndef FIFO_H
#define FIFO_H
#include <iostream>
#include <time.h>

struct fifo{
    int size;
    int* ar;
    int datalen; //позиция первого пустого элемента
};
void showMass(fifo*);

void fillRandom(fifo*);

int putFromEnd(fifo*, int);

int getFromEnd(fifo*, int);

void deinit(fifo*);

void flush(fifo*);

void initBuffer(fifo*, int);

#endif // FIFO_H
