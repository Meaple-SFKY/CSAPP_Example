//
//  lab_data_fir.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/19.
//

#include "lab_data_fir.h"

int odd_ones(unsigned x) {
    
    int flag = 1;
    
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    flag &= x;
    
    return flag;
}
