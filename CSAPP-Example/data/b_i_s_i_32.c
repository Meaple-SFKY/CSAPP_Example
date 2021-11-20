//
//  b_i_s_i_32.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/20.
//

#include "b_i_s_i_32.h"

int bad_int_size_is_32(void) {
    
    int set_msb = 1 << 31;
    int beyond_msb = set_msb << 1;
    
    return set_msb && !beyond_msb;
}
