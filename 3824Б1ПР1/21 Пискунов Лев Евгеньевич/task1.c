// Задача 1. Дан непустой массив A, содержащий n вещественных чисел. 
// Проверить, является ли массив упорядоченным (не строго) по возрастанию.
// Если массив не упорядочен, вернуть 0.
// Если массив упорядочен, вернуть 1.
int task1(double A[], size_t n)
{
	int f = 1;
	double e = 1e-10;
	for (size_t i = 1; i < n; i++)
	{
		if (A[i - 1] > A[i] - e)
		{
			f = 0;
			break;
		}
	}
	return f;
	return -1;
}
