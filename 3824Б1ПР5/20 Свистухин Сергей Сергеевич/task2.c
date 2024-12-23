// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий длины 3 в массиве.
#include <stdio.h>
int task2(unsigned A[], size_t n)
{
    int ans = 0;
    int ser = 1;
    for (int i = 1; i<n;i++) {
        if (A[i] == A[i-1])ser++;
        else {
            if (ser == 3)ans++;
            ser = 1;
        }
    }
    if (ser == 3)ans++;
    return ans;
}
