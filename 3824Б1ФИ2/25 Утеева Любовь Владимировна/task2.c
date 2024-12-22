// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти количество его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
/*size_t task2(double A[], size_t n)
{
  return -1;
}*/
#include <stdio.h>
#include <stddef.h> 
size_t task2(double A[], size_t n) {
    if (n <= 2) {
        return 0; 
    }
    size_t count = 0;
    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
            count++; 
        }
    }
    return count;
}
