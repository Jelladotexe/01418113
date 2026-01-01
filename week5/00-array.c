#include <stdio.h>
int main() {
    // array declaration and initialization
    int numbers[5] = {2, 3, 5, 7, 11};
    int total = 0;
    
    // access elements at index 5 to 9 are able, but not predictable thier values
    for (size_t i = 0; i < 10; ++i) {
        printf("numbers[%lu]: %d\n", i, numbers[i]);
        total += numbers[i];
    }
    printf("Summation of elements in numbers is %d\n", total);
    
    // update element at index 8 (out of bound for size 5) will be warned
    numbers[8] = 10;    // warning: array index 8 is past the end of the array (that has type 'int[5]')
    
    return 0;
}