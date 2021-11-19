//
//  datalib.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/19.
//

#include "datalib.h"

bool is_little_endian(void) {
    bool flag = 0;
    
    short x = 12345;
    char fir_byte = ((bytes_pointer)&x)[0];
    
    if (fir_byte == 57) {
        flag = 1;
    }
    
    return flag;
}
