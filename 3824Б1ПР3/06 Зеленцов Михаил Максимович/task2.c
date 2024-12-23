// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
long long task2(unsigned A[], size_t n) {
  if (n < 3) {
    return -1;
      }
  long long maxmin = -1;
  for (size_t i = 1; i < n - 1; i++) {
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) {
             if (A[i] > max_local_min) {
                maxmin = A[i]; }
        }
  }
  return maxmin;
}
