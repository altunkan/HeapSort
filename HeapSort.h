/* 
 * File:   HeapSort.h
 * Author: anil1
 *
 * Created on 16 Mart 2014 Pazar, 18:43
 */

#ifndef HEAPSORT_H
#define	HEAPSORT_H

#include <algorithm>
#include <math.h>
#include <iostream>

class HeapSort {
public:
    HeapSort();
    virtual ~HeapSort();
    int sortHeap(int* a, int size, int treeLevel);
    void print_ar(int ar[], int size);
private:
    int* first;
    int* last;
    int* ptr;
    int* parent;
    int  tmp;
    int parent_idx;
    int sortSize;

};

#endif	/* HEAPSORT_H */

