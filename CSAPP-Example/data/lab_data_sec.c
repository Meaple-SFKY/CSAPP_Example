//
//  lab_data_sec.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/19.
//

#include "lab_data_sec.h"

int leftmost_one(unsigned x) {
    
    int flag = 0;
    
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    
    flag = x & (~x >> 1);
    
    return flag;
}
