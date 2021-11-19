//
//  show_bytes.c
//  CSAPP-Example
//
//  Created by sfky on 2021/11/19.
//

#include "show_bytes.h"

void show_bytes(bytes_pointer start, int size) {
    for (int i = 0; i < size; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}
