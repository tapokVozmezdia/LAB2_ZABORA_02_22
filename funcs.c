#include "funcs.h"
#include <stdio.h>

void strToAr(char str[16], int *bitNumber) {
    int i = 0;
    while (str[i] != '\0') {
        ++i;
    }
    --i;
    int j = 0;
    while (i >= 0) {
        if (str[j] == '1') {
            bitNumber[15-i] = 1;
        }
        --i;
        ++j;
    }
}

void printBin(int *binNum) {
    for(int i = 0; i <= 16; ++i) {
        printf("%d", binNum[i]);
    }
    printf("\n");
}

void bitAdd(int *firstOperand, int *secondOperand, int *result) {
    for(int i = 0; i < 16; ++i) {
        result[i] = firstOperand[i] | secondOperand[i];
    }
}

void bitMultiply(int *firstOperand, int *secondOperand, int *result) {
    for(int i = 0; i < 16; ++i) {
        result[i] = firstOperand[i] & secondOperand[i];
    }
}

void bitXOR(int *firstOperand, int *secondOperand, int *result) {
    for(int i = 0; i < 16; ++i) {
        result[i] = firstOperand[i] ^ secondOperand[i];
    }
}

void bitInverse(int *operand, int *result) {
    for(int i = 0; i < 16; ++i) {
        result[i] = (~operand[i] * -1) & 1;
    }
}
