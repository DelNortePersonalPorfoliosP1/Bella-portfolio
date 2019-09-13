//
//  Rectangle lab.c
//  pythagorean theorem lab
//
//  Created by Wilson, Isabella on 9/13/19.
//  Copyright © 2019 Wilson, Isabella. All rights reserved.
//

#include "Rectangle lab.h"
#include <stdio.h>

// To execute C, please define "int main()"

int main() {
    
    printf("I'm the rectangler, input values that I will add\n");
    
    int length;
    int width;
    
    printf("\nRectangler asks for a length:");
    scanf("%i", length);
    
    printf("\nRectangler asks for a width:");
    scanf("%i", width);
    
    printf("\nlength: %i \n width: %i ", length, width);
    
    int perimeter = 2*(length + width);
    
    printf("\nperimeter: %i", perimeter);
    
    
    return 0;
}
