//
//  i_s_a_a.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/19.
//

#include "i_s_a_a.h"

bool int_shifts_are_arithmetic(void) {
    
    bool flag = false;
    int x = -1;
    
    int size = sizeof(int);
    
    if (((x >> (size - 1)) % 2 + 2) == 1) {
        flag = true;
    }
    
    return flag;
}
