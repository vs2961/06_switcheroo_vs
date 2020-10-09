#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    // Step 1
    int arr[10];

    // Step 2
    srand(time(NULL));
    int i;
    for (i = 0; i < 10; i++) {
        arr[i] = rand();
    }

    // Step 3
    arr[9] = 0;

    // Step 4
    for (i = 0; i < 10; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    // Step 5
    int ray[10];

    // Step 6
    int *arrp = arr + 9;
    int *rayp = ray;
    for (i = 0; i < 10; i++) {
        *rayp = *arrp;
        rayp++;
        arrp--;
        printf("ray[%d]: %d\n", i, ray[i]);
    }
}
