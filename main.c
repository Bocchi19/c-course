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

    if (option == 1){
        uint32_t firstNumber, secondNumber;
        printf ("");
    }
    else if (option == 2){
        uint32_t first_number, second_number;
        
        printf ("\nEnter first number: "),
        scanf ("%u", &first_number);
        printf ("First number: %u\n", first_number);

        printf ("\nEnter second number: ");
        scanf ("%u", &second_number);
        printf ("Second number: %u", second_number);

        uint32_t gcd =(first_number < second_number) ? first_number : second_number;
        for (;gcd >= 1; gcd--){
            if (first_number % gcd == 0 && second_number % gcd == 0)
                break;
        }
        printf ("\nGCD(%u, %u) = %u", first_number, second_number, gcd);
    }
    return 0;
}
