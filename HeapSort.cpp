/* 
 * File:   HeapSort.cpp
 * Author: anil1
 * 
 * Created on 16 Mart 2014 Pazar, 18:43
 */

#include "HeapSort.h"

using namespace std;

HeapSort::HeapSort() {
}

HeapSort::~HeapSort() {
}

int HeapSort::sortHeap(int* a, int size, int treeLevel) {
    sortSize = size;
    for (int k = 0; k<treeLevel; k++) {
        ptr = a;
        parent = a;
        ptr = ptr + size -1;
        for (int i=size-1; i >= 0; i--) {
            parent = a;
            parent_idx = (i-1)/2;
            parent = parent+parent_idx;
            if (*ptr > *parent) {
                tmp = *ptr;
                *ptr = *parent;
                *parent = tmp;
            }
            ptr--;
       }
    }
    
    first = a;
    last = a + (--sortSize);
    tmp = *first;
    *first = *last;
    *last = tmp;
    if (sortSize == 0)
        return 0;
    sortHeap(a, sortSize, (int)pow(sortSize, 1.0/2.0));    
}

void HeapSort::print_ar(int ar[], int size) {
    for (int i = 0; i<size; i++) {
        cout << i<<":" <<ar[i] << endl;
    }
}