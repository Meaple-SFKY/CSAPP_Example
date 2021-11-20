//
//  eva_one.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/19.
//

#include "eva_one.h"

bool is_eva_one(int x) {
    
    bool flag = (!~x) || (!x) || (x % 2) || (x >> 31);
    
    return flag;
}
