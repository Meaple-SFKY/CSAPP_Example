//
//  rotate_left.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/20.
//

#include "rotate_left.h"

unsigned rotate_left(unsigned x, int n) {
    
    int w = sizeof(int) << 3;
    unsigned data = (unsigned)-1 << (w - n);
    
    data &= x;
    data >>= w - n;
    data &= (unsigned)-1 >> (w - n);
    x <<= n;
    data |= x;
    
    return data;
}
