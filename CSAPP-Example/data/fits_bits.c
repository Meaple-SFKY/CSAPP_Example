//
//  fits_bits.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/20.
//

#include "fits_bits.h"

int fits_bits(int x, int n) {
    
    int flag = 1;
    int w = sizeof(int) << 3;
    
    flag &= !((w - n) >> (w - 1));
    x >>= (n - 1);
    flag &= (!(x + 1) || !x);
    
    return flag;
}
