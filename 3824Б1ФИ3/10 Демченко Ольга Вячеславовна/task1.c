// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.
int task1(int A[], size_t n)
{
  int i, maxc = A[0], index_max = 0;
  int size_a = sizeof(A)/sizeof(int)
  for (i = 1; i < size_a; i++) {
    if (A[i] >= maxc) {
      maxc = A[i];
      index_maxc = i;
    }
  }
  return index_max;
}
