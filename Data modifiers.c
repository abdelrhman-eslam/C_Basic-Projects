
#include <stdio.h>

/* 
 * The program entry Point 
 */
void main (void) {
    /* printf is a function used to display data on the screen */
    printf("101 in decimal is %d in decimal\n"    , 101); /* The formate specifier %d is used to represent integer values in base 10 */
    printf("101 in decimal is %x in hexadecimal\n", 101); /* The formate specifier %x is used to represent integer values in base 16 */

    printf("65 in hexadecimal is %d in decimal\n"    , 0x65); /* The formate specifier %d is used to represent integer values in base 10 */
    printf("65 in hexadecimal is %x in hexadecimal\n", 0x65); /* The formate specifier %x is used to represent integer values in base 16 */
}