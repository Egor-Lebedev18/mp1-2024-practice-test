// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся ровно два раза, на -1.
void task2(int A[], size_t n)
{
	A[0] = 1111111111;
	for (int i = 0; i < n; i++) 
		for (int j = 1; j < n; j++) 
			if (A[i] == A[j] && i != j) {
				A[i] = -1;
				A[j] = -1;
			}
}
