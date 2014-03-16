/* 
 * File:   main.cpp
 * Author: anil1
 *
 * Created on 16 Mart 2014 Pazar, 12:48
 */

#include <cstdlib>
#include "HeapSort.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int numOfElements = 9;
    //int test[numOfElements] = {5,1,6,3,2,9,7,8,4};
    int test[9] = {52,12,432,32,11,5,4,555,4};
    int treeLevel = (int)pow(numOfElements, 1.0/2.0);
    HeapSort h;
    h.sortHeap(test, numOfElements, treeLevel);
    h.print_ar(test, numOfElements);
    return 0;
}

