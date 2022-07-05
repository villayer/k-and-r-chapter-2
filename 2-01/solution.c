#include <stdio.h>
#include <stdlib.h>

// for better accuracy :thumbs_up:
#include <math.h> 

int main(void) {
    
    int INT = sizeof(int);
    int U_INT = sizeof(unsigned int);

    short SHORT = sizeof(short);
    short U_SHORT = sizeof(unsigned short);

    char CHAR = sizeof(char);
    float FLOAT = sizeof(float);
    double DOUBLE = sizeof(double);


    // multiply by 8 because it's a byte
    printf("char: from 0 to %.lf\n", pow(2, CHAR * 8) - 1);
    
    printf("unsigned int: from 0 to %.lf\n", pow(2, INT * 8) - 1);
    printf("signed int: from -%.lf to %.lf\n", pow(2, INT * 8)/2, pow(2, INT * 8)/2 - 1);

    printf("unsigned short: from 0 to %.lf\n", pow(2, SHORT * 8) - 1);
    printf("signed short: from -%.lf to %.lf\n", pow(2, SHORT * 8)/2, pow(2, SHORT * 8)/2 - 1);


    printf("float: from 0 to %.lf\n", pow(2, FLOAT * 8) - 1);
    printf("double: from 0 to %.lf\n", pow(2, DOUBLE * 8) - 1);

    

    return 0;
}
