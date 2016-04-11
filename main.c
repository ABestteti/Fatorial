//
//  main.c
//  Fatorial
//
//  Created by Anderson Bestteti on 11/9/15.
//  Copyright © 2015 Anderson Bestteti. All rights reserved.
//

#include <stdio.h>
#include "RecursiveFatorial.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    double num = 5;

    printf("Hello, World!\n");
    printf("Fatorial of %f is %f\n",num,RecursiveFatorial(num));
    return 0;
}
