// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего правого соседа.
size_t task1(int A[], size_t n)
{
	n--; size_t c = 0;
	for (size_t i = 0;i < n;i++) { if (A[i] < A[i + 1])c++; }
	return c;
}
