//
//  lower_one_mask.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/20.
//

#include "lower_one_mask.h"

int lower_one_mask(int n) {
    
    int w = sizeof(int) << 3;
    
    return (unsigned)-1 >> (w - n);
}
