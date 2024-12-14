#include "func.h"

void findMax(int* p_array, size_t size, int* result) {
    *result = p_array[0];
    for (size_t i=0; i<size; i++) {
        if (p_array[i]>*result) {
            *result = p_array[i];
        }
    }
}
