/*Input: 2 integer (2; 2^32 - 1), 1 operator
Output: Ket qua gon nhat. (2; 2^32 -1)

2. Tim UCLN

*/
#include <stdio.h>
#include<stdint.h>

int main () {
    printf ("\nSimple Calculator");
    
    printf ("\n1. Basic Calculation");
    printf ("\n2. GCD");
    printf ("\n3/ Exit");

    printf ("\nSelect option [1 - 3]: ");

    uint8_t option;
    scanf ("%hhu", &option);
    printf ("\nMode selected: %hhu", option);
    return 0;
}
