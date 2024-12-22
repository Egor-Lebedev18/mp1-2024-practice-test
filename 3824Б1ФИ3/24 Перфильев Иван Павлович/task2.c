// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти количество его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
#include <stddef.h>
size_t task2(double A[], size_t n) {
    if (n < 3) {
        return -1; 
    }

    size_t t = 0; 

    for (size_t i = 1; i < n - 1; ++i) {
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) {
            t++;
        }
    }

    if (t == 0) {
        return -1; 
    }

    return t; 
}
