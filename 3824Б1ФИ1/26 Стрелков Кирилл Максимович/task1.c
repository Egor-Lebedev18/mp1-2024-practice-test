// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего правого соседа.
size_t task1(int A[], size_t n)
{
  int i = 0, counter = 0;
  for (i = 0; i < n - 1; ++i)
  {
    if (A[i] < A[i + 1]) counter++;
  }
  return counter;
}
