//
//  replace_byte.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/19.
//

#include "replace_byte.h"

unsigned replace_byte(unsigned x, int i, unsigned char b) {
    
    bytes_pointer arr = (bytes_pointer) &x;
    
    if (is_little_endian() == true) {
        arr[i] = b;
    } else {
        arr[sizeof(unsigned) - i - 1] = b;
    }
    
    return x;
}
