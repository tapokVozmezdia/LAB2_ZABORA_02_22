#include "funcs.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please, select one bit-operating function: \n");
    printf("\t1. Bitwise OR (|) \n");
    printf("\t2. Bitwise AND (&) \n");
    printf("\t3. Bitwise XOR (^) \n");
    printf("\t4. Bit Inversion (~) \n");
    int selectFunc;
    scanf("%d", &selectFunc);
    int *bitNumber1 = (int*)calloc(sizeof(int), 16);
    int *bitNumber2 = (int*)calloc(sizeof(int), 16);
    int *result = (int*)calloc(sizeof(int), 16);
    char str1[16];
    char str2[16];
    switch (selectFunc) {
        case 1:
            scanf("%s %s", &str1, &str2);
            strToAr(str1, bitNumber1);
            strToAr(str2, bitNumber2);
            bitAdd(bitNumber1, bitNumber2, result);
            printf("\n");
            printBin(bitNumber1);
            printf("\t\t|\n");
            printBin(bitNumber2);
            break;
        case 2:
            scanf("%s %s", &str1, &str2);
            strToAr(str1, bitNumber1);
            strToAr(str2, bitNumber2);
            bitMultiply(bitNumber1, bitNumber2, result);
            printf("\n");
            printBin(bitNumber1);
            printf("\t\t&\n");
            printBin(bitNumber2);
            break;
        case 3:
            scanf("%s %s", &str1, &str2);
            strToAr(str1, bitNumber1);
            strToAr(str2, bitNumber2);
            bitXOR(bitNumber1, bitNumber2, result);
            printf("\n");
            printBin(bitNumber1);
            printf("\t\t^\n");
            printBin(bitNumber2);
            break;
        case 4:
            scanf("%s", &str1);
            strToAr(str1, bitNumber1);
            bitInverse(bitNumber1, result);
            printf("\n");
            printf("~");
            printBin(bitNumber1);
            break;
        default:
            printf("No such option\n");
            exit(1);
    }
    printf("-----------------\n");
    printBin(result);
    printf("\nYour result: ");
    for (int i = 0; i < 16; ++i) {
        printf("%d", result[i]);
    }
    printf("\n");
    free(bitNumber1);
    free(bitNumber2);
    free(result);
    return 0;
}
