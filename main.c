#include <stdio.h>
#include "textcolors.h"

void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j, c;

    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
            c++;

            if (c % 4 == 0) {
                printf(" ");
            }
        }
    }
}

int main() {
    signed char a = 0xfb; // 1111 1011
    unsigned char b = 0xfb; // 1111 1011

    printf(LYELLOW BOLD "» IMPLEMENTATION\n" RESET);
    printf(YELLOW "   signed char " RESET "a = " LCYAN "0xfb" RESET ";\n");
    printf(YELLOW " unsigned char " RESET "b = " LCYAN "0xfb" RESET ";\n\n");

    printf(LYELLOW BOLD "» VALUES\n" RESET);
    printf("signed " BOLD WHITE "a" RESET " = " LCYAN "0xfb;\n" RESET);
    printf("├ " LGREY "as char:  " RESET "%3c   ", a);
    printBits(sizeof(a), &a);
    printf("\n");
    printf("└ " LGREY "as int :  " RESET "%3d   ", a);
    int ai = (int) a;
    printBits(sizeof(ai), &ai);
    printf("\n");

    printf("unsigned " BOLD WHITE "b" RESET " = " LCYAN "0xfb;\n" RESET);
    printf("├ " LGREY "as char:  " RESET "%3c   ", b);
    printBits(sizeof(b), &b);
    printf("\n");
    printf("└ " LGREY "as int :  " RESET "%3d   ", b);
    int bi = (int) b;
    printBits(sizeof(bi), &bi);
    printf("\n\n");

    printf(LYELLOW BOLD "» COMPARISONS\n" RESET);
    printf(BOLD " a  ==   b " RESET);
    if (a == b) printf(CHECK);
    else printf(CROSS);

    printf(BOLD "\n a  ==  -5 " RESET);
    if (a == -5) printf(CHECK);
    else printf(CROSS);
    printf("   " LGREY "-5 as constant" RESET);

    printf(BOLD "\n a  ==  -5 " RESET);
    int i = -5;
    if (a == i) printf(CHECK);
    else printf(CROSS);
    printf("   " LGREY "-5 as int variable" RESET);

    printf(BOLD "\n a  ==  -5 " RESET);
    char n = -5;
    if (a == n) printf(CHECK);
    else printf(CROSS);
    printf("   " LGREY "-5 as char variable" RESET);

    printf(BOLD "\n a  ==  -5 " RESET);
    if (a == (char) -5) printf(CHECK);
    else printf(CROSS);
    printf("   " LGREY "-5 as (char) constant" RESET);

    return 0;
}