//
//  RecursiveFatorial.c
//  Fatorial
//
//  Created by Anderson Bestteti on 11/9/15.
//  Copyright © 2015 Anderson Bestteti. All rights reserved.
//

#include "RecursiveFatorial.h"

double RecursiveFatorial(double num) {
    if (num == 1) {
        return 1;
    }
    // Comments .. ..
    return (num * RecursiveFatorial(num - 1));
}



