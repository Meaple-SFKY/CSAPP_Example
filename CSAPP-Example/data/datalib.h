//
//  datalib.h
//  CSAPP-Example
//
//  Created by sfky on 2021/11/19.
//

#ifndef datalib_h
#define datalib_h

#include <stdio.h>

#define bool int
#define true 1
#define false 0

typedef unsigned char * bytes_pointer;

bool is_little_endian(void);

#endif /* datalib_h */
