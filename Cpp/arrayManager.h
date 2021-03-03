//
// Created by thelo on 003 3 mar. 2021.
//

#ifndef CPP_ARRAYMANAGER_H
#define CPP_ARRAYMANAGER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
//#include <bits/stdc++.h> 

using namespace std;

void fillArray(int array[], int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 10;
    }
}

bool isInArray(int array[], int size, int search = 11){
    for (int i=0; i < size; i++){
        if (array[i] == search)
            return true;
    }
    return false;
}

#endif //CPP_ARRAYMANAGER_H
