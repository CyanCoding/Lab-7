#include <stdio.h>

void print_array(int array[], int length) {
    printf("Array:\n");

    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void calculate_and_print_swaps(int array[], int length) {
    // Do a bubble sort
    for (int i = 0; i < length - 1; i++) {
        int swaps = 0;
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swaps++;
                // I'm not sure if the professor wants us to count the other index we are switching too or not
                // We could do that by uncommenting the following line:
                // swaps[j + 1] += 1;

                array[j]        = array[j] ^ array[j + 1];
                array[j + 1]    = array[j] ^ array[j + 1];
                array[j]        = array[j] ^ array[j + 1];
            }
        }

        printf("Pass %d: %d swaps\n", i, swaps);
    }
}

int main() {
    int array[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
    int length = 9;


    print_array(array, length);
    calculate_and_print_swaps(array, length);
    return 0;
}
